contador = 0
quantidade = 0

while contador < 5:
    numero = float(input())
    if numero % 2 == 0:
        quantidade += 1
    contador += 1

print(f"{quantidade} valores pares")