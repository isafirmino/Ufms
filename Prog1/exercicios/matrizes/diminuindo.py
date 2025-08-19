def fazer_matriz(n):
    matriz = []
    for _ in range(n):
        nova_linha = [0] * n
        matriz.append(nova_linha)
    
    valor = n * n
    for i in range(n):
        if i % 2 == 0:
            for j in range(n):
                matriz[i][j] = valor
                valor -= 1
        else:
            for j in range(n -1, -1, -1):
                matriz[i][j] = valor
                valor -= 1
        
    
    for i in range(len(matriz)):
        for j in range(len(matriz)):
            print(matriz[i][j], end="\t")
        print()
                

def main():
    n = int(input())
    fazer_matriz(n)
main()