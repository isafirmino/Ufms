def fazer_matriz(n):
    matriz = [[0]*n for _ in range(n)]

    for i in range(n):
        for j in range(i, n):
            matriz[i][j] = matriz[j][i] = 2**(i+j)

    T = len(str(matriz[n-1][n-1]))
    for i in range(n):
        for j in range(n):
            if j == n-1:
                print(f"{matriz[i][j]:>{T}}", end="")
            else:
                print(f"{matriz[i][j]:>{T}}", end=" ")
        print()
    print()

def main():
    n = int(input())
    while n != 0:
        fazer_matriz(n)
        n = int(input())
main()