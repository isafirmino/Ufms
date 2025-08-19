num = int(input())
contador = 0

if num == 0:
    print("1")
else:
    while num > 0:
        num = num // 10 #divide o numero inteiro até ele ficar 0
        contador += 1

    print(contador)