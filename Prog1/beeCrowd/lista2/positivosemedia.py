valores = 0
contador = 0
soma = 0
quantidade = 0

while contador < 6:
    valores = float(input())
    if valores >= 0:
        soma = soma + valores
        quantidade += 1
    contador += 1

MEDIA = soma / quantidade
print(f"{quantidade} valores positivos")
print(f"{MEDIA:.1f}")
