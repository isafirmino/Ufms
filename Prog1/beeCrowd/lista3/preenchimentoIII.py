def calcular_metade(X):
    N = [f"{X:.4f}"]
    for _ in range(99):
        valor = X / 2
        X = valor
        N.append(f"{valor:.4f}")
    return N


def main():
    X = float(input())
    N = calcular_metade(X)
    for i in range(100):
        print(f"N[{i}] = {N[i]}")

main()