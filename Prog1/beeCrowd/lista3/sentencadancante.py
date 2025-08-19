def dancante(frase: str) -> str:
    f = list(frase)

    maiuscula = True
    
    for i in range(len(f)):
        if f[i] != " ":
            codigo = ord(f[i])
            if maiuscula:
                if 97 <= codigo <= 122:
                    f[i] = chr(codigo - 32)
                maiuscula = False
            else:
                if 65 <= codigo <= 90:
                    f[i] = chr(codigo + 32)
                maiuscula = True
                
    return "".join(f)

def main():
    while True:
        try:
            frase = input()
            d = dancante(frase)
            print(d)
        except EOFError:
            break
    
main()