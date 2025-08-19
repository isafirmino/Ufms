x = float(input())
n = int(input())
euler = 0

for contador in range (0, n + 1, +1):
    fatorial = 1
    for i in range (1, contador + 1, +1):
        fatorial *= i
    euler += (x ** contador) / fatorial

print(f"{euler:.4f}")