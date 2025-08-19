def fazer_matriz(n):
    matriz = [[0]*n for _ in range(n)]
    cal = n // 3
    for i in range(n):
        matriz[i][i] = 2
        matriz[i][n - 1 - i] = 3

        for i in range(n//3, n - n//3):
            for j in range(n//3, n - n//3):
                matriz[i][j] = 1

    matriz[n//2][n//2] = 4

    for i in range(n):
        for j in range(n):
            print(f"{matriz[i][j]}", end="")
        print()
    print()

def main():
    while True:
        try:
            n = int(input())
            fazer_matriz(n)
        except EOFError:
            break
main()