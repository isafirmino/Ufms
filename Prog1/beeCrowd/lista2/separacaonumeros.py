contador = 0
quant_par = 0
quant_impar = 0
quant_posi = 0
quant_neg = 0

while contador < 5:
    numero = float(input())
    if numero % 2 == 0:
        quant_par += 1
    else:
        quant_impar += 1
    if numero > 0:
        quant_posi += 1
    elif numero < 0:
        quant_neg += 1
    contador += 1

print(f"{quant_par} valor(es) par(es)\n"
      f"{quant_impar} valor(es) impar(es)\n"
      f"{quant_posi} valor(es) positivo(s)\n"
      f"{quant_neg} valor(es) negativo(s)"
)