num = int(input())
contador = 3
sinal = 1
pi = 0
conta = 0

while contador <= num:
    conta += sinal * (4 / (contador))
    contador += 2
    sinal *= -1

pi = 4 - conta
print(f"{pi:.4f}")