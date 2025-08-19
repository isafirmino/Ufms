N = int(input())

horas = N // 3600
N = N % 3600
minutos = N // 60
N = N % 60

print(f"{horas}:{minutos}:{N}")