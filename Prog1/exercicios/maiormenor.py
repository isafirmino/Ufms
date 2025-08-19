x = int(input())

num = int(input())
maior_num = num
menor_num = num
i = 1

while i < x:
    num = int(input())
    if num < menor_num:
        menor_num = num
    elif num > maior_num:
        maior_num = num
    i += 1
print(f"{menor_num} e {maior_num}")