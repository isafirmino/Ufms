def polinomio(x: float, a: list) -> float:
    soma = 0.0
    for i in range(len(a)):
        soma += a[i] * (x ** i)
    return soma 

def main():
    a = list(map(float, input().split()))

    k = int(input())
    for i in range(k):
        x = float(input())
        pol = polinomio(x, a)
        print(f"{pol:.4f}")

main()