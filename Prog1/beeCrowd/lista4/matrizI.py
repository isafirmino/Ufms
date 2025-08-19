def fazer_matriz(n):
    matriz = []
    for _ in range(n):
        nova_linha = [1]*n
        matriz.append(nova_linha)

    par_anterior = 2
    if n != 1:
        if n % 2 == 0 and n != 2:
            par_anterior = n
            for i in range(1, n - 1):
                for j in range(1, n -1):
                    matriz[i][j] = n - 2
                    

        if n % 2 != 0:
            if n != 3:
                for i in range(1, n - 1):
                    for j in range(1, n -1):
                        matriz[i][j] = n - 2
            a = (n // 2)
            matriz[a][a] = n - 3  

        
    print(matriz)


def main():
    while True:
        n = int(input())
        if n == 0:
            break
        
        fazer_matriz(n)
main()