def calcular_polinomio(num, x):
    resultado = 0
    for i in range(len(x)):
        resultado += x[i] * (num ** i)
    return resultado

def main():
    x = list(map(float, input().split()))
    k = int(input())

    numeros = []
    for _ in range(k):
        num = (float(input()))
        numeros.append(num)

    for num in numeros:
        polinomio = calcular_polinomio(num, x)
        print(f"{polinomio:.4f}")
main()