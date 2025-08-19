def encontrar_vet(X):
    menor = (X[0])
    posicao = 0
    for i in range(1, len(X)):
        if X[i] < menor:
            menor = X[i]
            posicao = i
    return menor, posicao


def main():
    N = int(input())
    X = list(map(int, input().split()))[:N]
    menor, posicao = encontrar_vet(X)
    print(f"Menor valor: {menor}\nPosição: {posicao}")

main()