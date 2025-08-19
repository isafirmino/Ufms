def decifrar(frase: list, inicio: int, fim: int):
    i = inicio
    j = fim

    while i < j:
        temp = frase[i]
        frase[i] = frase[j]
        frase[j] = temp
        i += 1
        j -= 1

def main():
    N = int(input())
    for i in range(N):
        frase = list(input())
        decifrar(frase, 0, len(frase) // 2 - 1)
        decifrar(frase, len(frase) // 2, len(frase) - 1)
        frase = "".join(frase)
        print(frase)

main()