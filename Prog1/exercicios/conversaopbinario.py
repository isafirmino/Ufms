num = int(input())
binario = 0
posicao = 1

while num > 0:
    resto = num % 2
    binario += resto * posicao
    num = num // 2
    posicao *= 10 #troca a casa decimal
print(binario)