num = int(input())
contador = 0
posicao = 1
dig_par = 0

while num > 0:
    ultimo_dig = num % 10
    if ultimo_dig % 2 == 0:
        dig_par += ultimo_dig * posicao
        posicao *= 10
    num = num // 10


print(dig_par)
