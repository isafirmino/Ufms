def calcularxy(A):
    X = []
    for linha in A: #cria x com os valores de a
        novalinha = []
        for num in linha:
            novalinha.append(num)
        X.append(novalinha)

    Y = []
    for i in range(len(A)): #cria y com numeros 0
        novalinha = []
        for j in range(len(A)):
            novalinha.append(0.0)
        Y.append(novalinha)

    for i in range(len(A)):
        for j in range(len(A)):
            if i == j:
                Y[i][j] = 1.0 #1 na diagonal

    divisaozero = False

    for i in range(len(A) - 1):
        if X[i][i] == 0: #verifica diagonal
            divisaozero = True
            break

        for j in range(i + 1, len(A)):
            b = X[i][j] / X[i][i] #calcula beta
            Y[i][j] = b #adiciona na matriz y
            for k in range(i, len(A)):
                X[k][j] -= b * X[k][i] #atualiza matriz x
    
    return X, Y, divisaozero

def main():
    n = int(input())
    if 2 <= n <= 10:
        A = []
        for _ in range(n):
            A.append(list(map(float, input().split())))
        X, Y, divisaozero= calcularxy(A)
        
        if divisaozero:
            print("Divisão por zero")
        else:
            for i in range(len(X)):
                for j in range(len(X)):
                     print(f"{X[i][j]:.2f}", end="\t")
                print()

            print() #espaço entre as matrizes

            for i in range(len(Y)):
                for j in range(len(Y)):
                     print(f"{Y[i][j]:.2f}", end="\t")
                print()
main()