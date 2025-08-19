def receber_vetores():
    N = []
    for _ in range(20):
        N.append(int(input()))
    return N

def inverter_vetores(N):
    for i in range(10):
        N[i], N[19 - i] = N[19 - i], N[i]
    return N

def main():
    N = receber_vetores()
    Y = inverter_vetores(N)
    for i in range(20):
        print(f"N[{i}] = {N[i]}")

main()