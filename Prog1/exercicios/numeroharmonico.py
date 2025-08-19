num = int(input())
posicao = 1
resultado = 0

while posicao <= num:
    resultado += 1 / posicao 
    posicao += 1
print(f"{resultado:.4f}")