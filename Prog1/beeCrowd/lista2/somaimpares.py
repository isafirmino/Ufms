X = int(input())
Y = int(input())

soma = 0

if X > Y:
    X, Y = Y, X

if X % 2 == 0:
    numero_impar = X + 1
else: 
    numero_impar = X + 2

while numero_impar < Y:
    soma = soma + numero_impar
    numero_impar += 2
    
print(soma)