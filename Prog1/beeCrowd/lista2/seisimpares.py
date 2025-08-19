X = int(input())
contador = 0

if X % 2 == 0:
    numero_impar = X + 1
else:
    numero_impar = X

while contador < 6:
    print(numero_impar)
    numero_impar += 2
    contador += 1