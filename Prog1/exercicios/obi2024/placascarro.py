#Antigo padrão ABI-1234
#Novo modelo ABC5D67
#Resto irregular

placa = input().strip()
if len(placa) == 8  and placa[3] == "-":
    placa_letras = placa[:3]
    placa_num = placa[4:]

    if placa_letras.isalpha() and placa_num.isdigit() and placa_letras.isupper():
        print("1")

elif len(placa) == 7:
    letras = 0
    num = 0

    if placa[:3].isalpha() and placa[3].isdigit() and placa[5:7] and placa[4].isalpha():
        print("2")

else:
    print("0")