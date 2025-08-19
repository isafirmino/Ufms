num = int(input())
x = 1
contador = 0

while x <= num:
    valor = num % x
    if valor == 0:
        contador += 1
    x += 1

if contador == 2:
    print("Primo")
else:
    print("Composto")