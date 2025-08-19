X = (input().strip())
naipes = {
    'C' : [0]*14,
    'E' : [0]*14,
    'U' : [0]*14,
    'P' : [0]*14,
    }  #Copas, espadas, ouros, paus

for i in range(0, len(X), 3):
        carta = X[i:i+3]
        dd = int(carta[:2])
        naipe = carta[2]
        naipes[naipe][dd] += 1

for naipe in ['C', 'E', 'U', 'P']:
    erro = False
    qntd_cartas = 0

    for dd in range(1, 14):
        if naipes[naipe][dd] > 1:
            erro = True
            break
        if naipes[naipe][dd] == 1:
             qntd_cartas += 1
    
    if erro:
         print("erro")
    else:
         print(13 - qntd_cartas)

