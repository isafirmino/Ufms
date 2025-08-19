hora, m1, seg = map(int, input().split(':'))
m2= int(input())
dias = 0

minutos = m1 + m2

while minutos >= 60:
    minutos -=60
    hora += 1
    if hora >= 24:
        hora -= 24
        dias +=1

if dias >= 1:
    print(f"{dias}:{hora}:{minutos}:{seg}")
else:
    print(f"{hora}:{minutos}:{seg}")


    
