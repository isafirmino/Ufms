def contagem_letras(frase, contagem):
    for s in frase:
        if 'A' <= s <= 'Z':
            indice = ord(s) - ord('A')
            contagem[indice] += 1
        elif 'a' <= s <= 'z':
            indice = ord(s) - ord('a')
            contagem[indice] += 1
        else:
            continue
    return contagem

def main():
    frase = input()
    contagem = [0] * 26
    letras = contagem_letras(frase, contagem)
    for i in range(26):
        if letras[i] > 0:
            letra = chr(ord('A') + i)
            print(f"{letra}: {letras[i]}")

main()