def maior_num(numeros):
    maior = numeros[0]
    for num in numeros:
        if num > maior:
            maior = num
    return maior

def menor_num(numeros):
    menor = numeros[0]
    for num in numeros:
        if num < menor:
            menor = num
    return menor



def main():
    numeros = list(map(int, input().split()))
    resultado_maior = maior_num(numeros)
    resultado_menor = menor_num(numeros)
    print(f"Menor = {menor_num(numeros)}\nMaior = {maior_num(numeros)}")



main()