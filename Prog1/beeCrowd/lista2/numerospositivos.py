quantidade = 0
contador = 0

while contador < 6:
    numero = float(input())
    if numero > 0.0:
        quantidade += 1
    contador += 1
print(f"{quantidade} valores positivos")
