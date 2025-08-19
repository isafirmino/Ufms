def converte(frase: str) -> str: #retorne uma string
    f = list(frase)
    for i in range(len(f)):
        codigo = ord(f[i])
        if 65 <= codigo <= 90:
            f[i] = chr(codigo + 32)
    return "".join(f)

def main():
    frase = input()
    frase_min = converte(frase)
    print(frase_min)

main()