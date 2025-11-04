//Isabele Maria Firmino e Joao Pedro Santos de Brito

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

struct pergunta
{
    char nivel;
    char descricao[200];
    char alt[4][30];
    char alt_correta;
};

// Adicionado 'bool visiveis[]' para indicar quais alternativas estão visíveis
void exibir_interface(struct pergunta p, int num_pergunta, float premio_acertar, int pulos, int plateia, int universitarios, int cartas, bool visiveis[]);
bool executar_pulos(int *pulos_restantes);
void executar_plateia(int *plateia_restantes, char alt_correta);
void executar_universitarios(int *univ_restantes, char alt_correta);
void executar_cartas(int *cartas_restantes, char alt_correta, bool visiveis[]);


int main()
{

    FILE *f;
    int perguntasLidas = 0;

    f = fopen("perguntas.dat", "rb");

    if (f == NULL)
    {
        perror("Erro ao abrir o arquivo perguntas.dat");
        return 1;
    }

    struct pergunta *todasPerguntas = (struct pergunta *)malloc(sizeof(struct pergunta) * 70);

    while (perguntasLidas < 70 && fread(&todasPerguntas[perguntasLidas], sizeof(struct pergunta), 1, f) == 1)
    {
        perguntasLidas++;
    }

    fclose(f);


    // declarar vetores pra cada nivel
    struct pergunta faceis[20];
    struct pergunta medias[20];
    struct pergunta dificeis[20];
    struct pergunta superdificeis[10];

    memcpy(faceis, &todasPerguntas[0], 20 * sizeof(struct pergunta));
    memcpy(medias, &todasPerguntas[20], 20 * sizeof(struct pergunta));
    memcpy(dificeis, &todasPerguntas[40], 20 * sizeof(struct pergunta));
    memcpy(superdificeis, &todasPerguntas[60], 10 * sizeof(struct pergunta));

    printf("BEM-VINDO AO SHOW DO MILHAO!\n");
    srand(time(NULL));

    // inicializacao da logica de jogo
    int pergunta_atual = 1;
    float premio_total = 0.0;
    int ajuda_pular_pergunta = 3;
    int ajuda_plateia = 3;
    int ajuda_universitarios = 3;
    int ajuda_cartas = 3;
    bool jogoativo = true;

    float premios[16] = {
        1000.0, 2000.0, 3000.0, 4000.0, 10000.0,
        20000.0, 30000.0, 40000.0, 50000.0, 100000.0,
        200000.0, 300000.0, 400000.0, 500000.0, 600000.0,
        1000000.0};

    while (pergunta_atual <= 16 && jogoativo)
    {
        struct pergunta pselecionada;
        int index_aleatorio;

        
        if (pergunta_atual <= 5)
        {
            index_aleatorio = rand() % 20;
            pselecionada = faceis[index_aleatorio];
        }
        else if (pergunta_atual <= 10)
        {
            index_aleatorio = rand() % 20;
            pselecionada = medias[index_aleatorio];
        }
        else if (pergunta_atual <= 15)
        {
            index_aleatorio = rand() % 20;
            pselecionada = dificeis[index_aleatorio];
        }
        else
        {
            index_aleatorio = rand() % 10;
            pselecionada = superdificeis[index_aleatorio];
        }

        bool visiveis[4] = {true, true, true, true}; // Array para controlar alternativas visíveis
        bool pergunta_respondida = false;
        while(!pergunta_respondida && jogoativo){
            // Passa o array 'visiveis' para a função de exibição
            exibir_interface(pselecionada, pergunta_atual, premios[pergunta_atual - 1], ajuda_pular_pergunta, ajuda_plateia, ajuda_universitarios, ajuda_cartas, visiveis);

        char opcao;
        scanf(" %c", &opcao); // Adicionado espaço antes de %c para consumir newlines pendentes

        switch (opcao)
        {
            case '1': {// Pular
                bool pular = executar_pulos(&ajuda_pular_pergunta);
                if (pular){
                    //pergunta atual não respondida, pergunta respondida = true força a chamada de outra pergunta do mesmo nivel
                    pergunta_respondida = true;
                }
                break;}

            case '2': {// Plateia
                executar_plateia(&ajuda_plateia, pselecionada.alt_correta);
                //sem pergunta respondida = true para ele repetir a pergunta
                break; }
            case '3': {// Universitários
                executar_universitarios(&ajuda_universitarios, pselecionada.alt_correta);
                break;}
            case '4': // Cartas
                executar_cartas(&ajuda_cartas, pselecionada.alt_correta, visiveis);
                break;
            case '5': // Parar
                printf("Voce escolheu parar. Voce sai com R$ %.2f\n", premio_total);
                jogoativo = false;
                pergunta_respondida = true;
                break;

            // Respostas
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            {
                // Verifica se a alternativa escolhida está visível
                int index_escolhido = opcao - 'a';
                if (!visiveis[index_escolhido]) {
                    printf("Alternativa %c foi excluida e nao pode ser escolhida. Tente novamente.\n", opcao);
                    break; // Sai do switch e repete o loop while
                }

                pergunta_respondida = true; // O usuário deu uma resposta válida
                if (opcao == pselecionada.alt_correta)
                {
                    // Resposta CORRETA
                    premio_total = premios[pergunta_atual - 1];
                    printf("\n========================================\n");
                    printf("RESPOSTA CORRETA!\n");
                    printf("Seu premio agora e: R$ %.2f\n", premio_total);
                    printf("========================================\n\n");
                    pergunta_atual++; // Avança para a próxima pergunta
                }
                else
                {
                    // Resposta ERRADA
                    printf("\n========================================\n");
                    printf("QUE PENA! RESPOSTA ERRADA!\n");
                    printf("A resposta correta era: %c\n", pselecionada.alt_correta);
                    printf("Voce perdeu tudo.\n");
                    printf("========================================\n\n");
                    premio_total = 0.0;
                    jogoativo = false; // Encerra o jogo
                }
                break;
            }

            default:
                printf("Opcao invalida. Tente novamente.\n");
                // O loop 'while(!perguntaRespondida)' vai repetir
            } 
        }
    }
    printf("fim de jogo\n");
    if (pergunta_atual > 16)
    {
        printf("PARABENS! Voce acertou a pergunta final e ganhou R$ %.2f!\n", premio_total);
    }
    else
    {
        printf("Seu premio final: R$ %.2f", premio_total);
    }
    free(todasPerguntas);
    return 0;
         
}

// Atualizada para receber 'bool visiveis[]'
void exibir_interface(struct pergunta p, int num_pergunta, float premio_acertar, int pulos, int plateia, int universitarios, int cartas, bool visiveis[])
{
    printf("\n == Pergunta %d valendo R$ %.2f ==\n", num_pergunta, premio_acertar);
    printf("%s\n", p.descricao);
    printf("\n");
    
    // Exibe apenas as alternativas visíveis
    if (visiveis[0]) printf("a) %s\n", p.alt[0]); else printf("a) [Alternativa Excluida]\n");
    if (visiveis[1]) printf("b) %s\n", p.alt[1]); else printf("b) [Alternativa Excluida]\n");
    if (visiveis[2]) printf("c) %s\n", p.alt[2]); else printf("c) [Alternativa Excluida]\n");
    if (visiveis[3]) printf("d) %s\n", p.alt[3]); else printf("d) [Alternativa Excluida]\n");
    
    printf("\n");

    printf(" -- AJUDA -- \n");
    printf("[1] Pular pergunta (%dx)\n", pulos);
    printf("[2] Pedir ajuda a plateia (%dx)\n", plateia);
    printf("[3] Pedir ajuda aos universitarios (%dx)\n", universitarios);
    printf("[4] Pedir ajuda as cartas (%dx)\n", cartas);
    printf("[5] Parar\n");
    printf("\nEntre com a sua resposta(a, b, c, d ou 1 - 5)\n");
}

bool executar_pulos(int *pulos_restantes){
    if (*pulos_restantes > 0){
        (*pulos_restantes)--;
        printf("AJUDA: voce utilizou 1 pulo, %d pulo(s) restantes\n", *pulos_restantes);
        printf("carregando outra pergunta\n");
        return true;
    } else {
        printf("AJUDA: voce nao tem mais pulos\n");
        return false;
    }
}

void executar_plateia(int *plateia_restantes, char alt_correta){
    if (*plateia_restantes <= 0){
        printf("AJUDA> voce nao tem mais ajudas da plateia\n");
        return;
    } 
    (*plateia_restantes)--; 

    // 3. Prepara a lógica de probabilidade usando if-else 
    int votos_a = 0, votos_b = 0, votos_c = 0, votos_d = 0;
    int prob_a, prob_b, prob_c, prob_d;

    // Define a probabilidade de 'a'
    if (alt_correta == 'a') {
        prob_a = 40;
    } else {
        prob_a = 20;
    }

    // Define a probabilidade de 'b'
    if (alt_correta == 'b') {
        prob_b = 40;
    } else {
        prob_b = 20;
    }

    // Define a probabilidade de 'c'
    if (alt_correta == 'c') {
        prob_c = 40;
    } else {
        prob_c = 20;
    }

    // Define a probabilidade de 'd'
    if (alt_correta == 'd') {
        prob_d = 40;
    } else {
        prob_d = 20;
    }
    
    // Cria probabilidades acumuladas para o rand()
    int acumul_a = prob_a;
    int acumul_b = acumul_a + prob_b;
    int acumul_c = acumul_b + prob_c;
    // cumul_d é 100

    // 4. Gera os 30 votos
    for (int i = 0; i < 30; i++)
    {
        int r = rand() % 100; // Gera um número de 0 a 99

        if (r < acumul_a) {
            votos_a++;
        } else if (r < acumul_b) {
            votos_b++;
        } else if (r < acumul_c) {
            votos_c++;
        } else {
            votos_d++;
        }
    }

    // 5. Exibe os resultados
    
    printf("AJUDA: A plateia votou! (Restam: %d)\n", *plateia_restantes);
    printf("Alternativa A: %d votos\n", votos_a);
    printf("Alternativa B: %d votos\n", votos_b);
    printf("Alternativa C: %d votos\n", votos_c);
    printf("Alternativa D: %d votos\n", votos_d);
    
}

void executar_universitarios(int *univ_restantes, char alt_correta){
    if (*univ_restantes <= 0){
        printf("AJUDA: voce nao tem mais ajudas dos universitarios\n");
        return;
    }
    (*univ_restantes)--;
    int prob_a, prob_b, prob_c, prob_d;
    
    // A lógica de probabilidade dos universitários no código original estava incorreta (somava 70+10+10+10 = 100, mas só se a correta fosse 'a').
    // Corrigindo para que a correta tenha 70% e as incorretas 10% cada, totalizando 100%.
    
    // Inicializa todas com 10%
    prob_a = 10;
    prob_b = 10;
    prob_c = 10;
    prob_d = 10;

    // Aumenta a probabilidade da correta para 70%
    if(alt_correta == 'a'){
        prob_a = 70;
    } else if(alt_correta == 'b'){
        prob_b = 70;
    } else if(alt_correta == 'c'){
        prob_c = 70;
    } else if(alt_correta == 'd'){
        prob_d = 70;
    }

    int acumul_a = prob_a;
    int acumul_b = acumul_a + prob_b;
    int acumul_c = acumul_b + prob_c;

    printf("AJUDA: Os 3 universitarios opinaram! (Restam: %d)\n", *univ_restantes);

    for (int i = 1; i <= 3; i++){
        int r = rand() % 100;
        char opiniao;

        if(r < acumul_a){
            opiniao = 'A';
        } else if ( r < acumul_b){
            opiniao = 'B';
        } else if (r<acumul_c){
            opiniao = 'C';
        } else {
            opiniao = 'D';
        }

        printf("Universitario %d opina: Alternativa %c\n", i, opiniao);
    }
}

// Implementação da função Cartas (Lógica Simplificada: Exclui 2 incorretas)
void executar_cartas(int *cartas_restantes, char alt_correta, bool visiveis[]){
    if (*cartas_restantes <= 0){
        printf("AJUDA: voce nao tem mais ajudas das cartas\n");
        return;
    }
    (*cartas_restantes)--;
    
    // Mapeamento de char para índice do array
    int indice_correto = alt_correta - 'a';
    
    // 1. Encontra as alternativas incorretas que ainda estão visíveis
    int incorretas_visiveis[3];
    int count_incorretas = 0;
    for (int i = 0; i < 4; i++) {
        // Verifica se é incorreta E se ainda está visível
        if (i != indice_correto && visiveis[i]) {
            incorretas_visiveis[count_incorretas++] = i;
        }
    }
    
    // Lógica Simplificada: Sempre tenta excluir 2 alternativas incorretas
    int num_exclusoes = 2;
    
    // Garante que não tentamos excluir mais do que o número de incorretas visíveis
    if (num_exclusoes > count_incorretas) {
        num_exclusoes = count_incorretas;
    }
    
    printf("AJUDA: Voce utilizou a ajuda das Cartas! (Restam: %d)\n", *cartas_restantes);
    
    if (num_exclusoes == 0) {
        printf("Nenhuma alternativa incorreta visivel para ser excluida.\n");
    } else {
        printf("Duas alternativas incorretas foram excluidas:\n");
        
        // Embaralha as incorretas visíveis para escolher aleatoriamente
        for (int i = 0; i < count_incorretas; i++) {
            int j = rand() % count_incorretas;
            int temp = incorretas_visiveis[i];
            incorretas_visiveis[i] = incorretas_visiveis[j];
            incorretas_visiveis[j] = temp;
        }
        
        // Exclui as primeiras 'num_exclusoes' do array embaralhado
        for (int i = 0; i < num_exclusoes; i++) {
            int indice_a_excluir = incorretas_visiveis[i];
            visiveis[indice_a_excluir] = false;
            printf("- Alternativa %c foi excluida.\n", 'a' + indice_a_excluir);
        }
    }
    
    printf("As alternativas restantes sao exibidas na interface.\n");
}