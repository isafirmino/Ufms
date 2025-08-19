def pedir_numero():
    n = int(input())
    return n

def pedir_vetores(n):
    numeros = []
    for _ in range(n):
        numeros.append(int(input()))
    return numeros

def calcular_fibonacci(numeros):
    x = []
    for num in numeros:
        if num == 0:
            x.append(0)
        elif num == 1:
            x.append(1)
        else:
            a, b = 0, 1
            for _ in range(num-1):
                a, b = b, a + b
            x.append(b)
    return x

def main():
    n = pedir_numero()
    numeros = pedir_vetores(n)
    resultados = calcular_fibonacci(numeros)
    for i in range(n):
        print(f"Fib({numeros[i]}) = {resultados[i]}")

main()