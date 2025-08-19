def fazer_matriz(m, n):
    sequencia = True
    matriz = []
    for _ in range(m):
        nova_linha = list(map(int, input().split()))
        matriz.append(nova_linha)
    
    for i in range(m):
        for j in range(n-1):
            if matriz[i][j] >= matriz[i][j+1]:
                sequencia = False
                break
    for j in range(n):
        for i in range(m-1):
            if matriz[i][j] >= matriz[i+1][j]:
                sequencia = False
                break
    
    if sequencia:
        print("Crescente")
    else:
        print("Nao Crescente")

def main():
    m, n = map(int, input().split())
    fazer_matriz(m, n)
main()