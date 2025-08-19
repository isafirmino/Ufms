def receber_num():
    numeros = []
    for i in range(15):
        X = int(input())
        numeros.append(X)
    return numeros

def separar_num(numeros):
    par = []
    impar = []
    for num in numeros:
        if num % 2 == 0:
            par.append(num)
            if len(par) == 5:
                for i in range(5):
                    print(f"par[{i}] = {par[i]}")
                par = []
        else:
            impar.append(num)
            if len(impar) == 5:
                for i in range(5):
                    print(f"impar[{i}] = {impar[i]}")
                impar = []

    return par, impar

def main():
    numeros = receber_num()
    par, impar = separar_num(numeros)
    if len(impar) != 0:
        for i in range(len(impar)):
            print(f"impar[{i}] = {impar[i]}")
    if len(par) != 0:
        for i in range(len(par)):
            print(f"par[{i}] = {par[i]}")

main()