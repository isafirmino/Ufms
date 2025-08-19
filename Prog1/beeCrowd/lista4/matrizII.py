def fazer_matriz(n):
    M = [[0]*n for i in range(n)]

    for i in range(n):
        for j in range (i, n):
            M[i][j] = M[j][i] = j - i + 1

    for i in range(n):
        for j in range(n):
            if j == n - 1:
                print(f"{M[i][j]:>3}", end="")
            else:
                print(f"{M[i][j]:>3}", end=" ")
        print()
    print()


def main():
    n = int(input())
    while n != 0:
        fazer_matriz(n)
        n = int(input())
main()