x = float(input())
k = int(input())
sinal = -1
cos = 1.0

for contador in range(2, k + 1, 2):
    fatorial = 1
    for i in range(1, contador + 1):
        fatorial *= i
    cos += sinal * ((x ** contador) / fatorial)
    sinal *= -1

print(cos)
