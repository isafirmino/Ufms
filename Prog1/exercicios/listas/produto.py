def produto(u, v):
    resultado = 0.0
    for i in range(len(u)):
        resultado += u[i] * v[i]
    return resultado

def main():
    u = list(map(float, input().split()))
    v = list(map(float, input().split()))
    resultado = produto(u, v)
    print(f"{resultado:.4f}")

main()