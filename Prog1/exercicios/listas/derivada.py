def calcular_derivada(numeros):
    derivada = []
    for i in range(1, len(numeros)):
        derivada.append(i * numeros[i])
    return derivada

def main():
    numeros = list(map(float, input().split()))
    derivada = calcular_derivada(numeros)
    for num in derivada:
        print(f"{num:.4f}")
    

main()