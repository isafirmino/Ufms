def receber_vetores(N):
    X = []
    for _ in range(N):
        x = input().strip()
        X.append(x)
    return X

def calcular_leds(X):
    leds = 0
    n_leds = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]
    resultados = []
    for num_str in X:
        leds = 0 
        for i in num_str:
            i = int(i)
            leds += n_leds[i]
        resultados.append(leds)
    return resultados

def main():
    N = int(input())
    X = receber_vetores(N)
    leds = calcular_leds(X)
    for i in range(len(leds)):
        print(f"{leds[i]} leds")

main()