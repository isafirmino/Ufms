num = int(input())
contador = 0
soma = 0

while num > 0:
    dig = num % 10 #ultimo digito
    soma += dig * (2 ** contador)
    num = num // 10
    contador += 1
print(soma)