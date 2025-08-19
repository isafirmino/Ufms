N = int(input())
x = N

cem = N // 100
N = x % 100
cinq = N // 50
N = x % 50
vinte = N // 20
N = N % 20
dez = N // 10
N = x % 10
cinco = N // 5
N = x % 5
dois = N // 2
N = N % 2
um = N // 1

print(f"{x}")
print(f"{cem} nota(s) de R$ 100,00")
print(f"{cinq} nota(s) de R$ 50,00")
print(f"{vinte} nota(s) de R$ 20,00")
print(f"{dez} nota(s) de R$ 10,00")
print(f"{cinco} nota(s) de R$ 5,00")
print(f"{dois} nota(s) de R$ 2,00")
print(f"{um} nota(s) de R$ 1,00")
