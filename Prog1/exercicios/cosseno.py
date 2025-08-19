x = float(input())
par = int(input())
cos = 1.0
sinal = -1

for contador in range (2, par + 1, 2):
    fatorial = 1
    for i in range (1, contador +1):
        fatorial *= i
    cos += sinal * (x ** contador) / fatorial
    sinal *= -1

print(f"{cos:.4f}")