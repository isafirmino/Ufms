def fazer_matriz(n):
    matriz = []
    soma_linhas = []
    soma_colunas = []
    soma_diagonal = 0
    soma_sec = 0
    for _ in range(n):
        nova_linha = list(map(int, input().split()))
        matriz.append(nova_linha)
    
    for i in range(len(matriz)):
        soma_linha = 0
        soma_coluna = 0
        for j in range(len(matriz)):
            if i == j:
                soma_diagonal += matriz[i][j]
            if i + j == n - 1:
                soma_sec += matriz[i][j]

            soma_linha += matriz[i][j]
            soma_coluna += matriz[j][i]
        soma_colunas.append(soma_coluna)
        soma_linhas.append(soma_linha)

    linhas_iguais = True
    for linha in soma_linhas:
        if linha != soma_linhas[0]:
            linhas_iguais = False
            break
    colunas_iguais = True
    for coluna in soma_colunas:
        if coluna != soma_colunas[0]:
            colunas_iguais = False
            break
        
    if (linhas_iguais and colunas_iguais and 
        soma_diagonal == soma_sec and 
        soma_diagonal == soma_linhas[0]):
        print("SIM")
    else:
        print("NAO")
            
                        
def main():
    n = int(input())
    fazer_matriz(n)
main()