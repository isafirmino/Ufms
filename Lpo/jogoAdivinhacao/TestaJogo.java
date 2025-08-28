public class TestaJogo{
    public static void main(String[] args){
        Jogador[] jogadores = new Jogador[3];

        jogadores[0] = new Jogador();
        jogadores[0].setNome("Fred");

        jogadores[1] = new Jogador();
        jogadores[1].setNome("Eliza");

        jogadores[2] = new Jogador();
        jogadores[2].setNome("Vera");

        JogoAdivinhacao jogo = new JogoAdivinhacao();
        jogo.jogadores = jogadores;
        jogo.jogar(3);
        jogo.getVencedor();
    }
}
