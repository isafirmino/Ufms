def fazer_matriz(n):
    matriz = []
    for _ in range(n):
        nova_linha = list(map(int, input().split()))
        matriz.append(nova_linha)
    return matriz
    
def verificar(matriz, n):
    positivo = 0
    negativo = 0
    for i in range(n):
        for j in range(n):
            if i == j or i + j == n - 1:
                if matriz[i][j] > 0:
                    positivo += 1
                elif matriz[i][j] < 0:
                    negativo += 1    
    print(positivo)
    print(negativo)         

def main():
    n = int(input())
    matriz = fazer_matriz(n)
    verificar(matriz, n)
main()