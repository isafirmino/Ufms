def contar_num(n):
    matriz = []
    contagem = [0] * 31

    for i in range(n):
        nova_linha = list(map(int, input().split()))
        matriz.append(nova_linha)
        for j in range(n):
            contagem[matriz[i][j]] += 1
    return contagem

def verificar(contagem):
    maior_num = 0
    numero = []
    for i in range(len(contagem)):
        if contagem[i] >= maior_num:
            maior_num = contagem[i]
            numero_unico = i

    for j in range(len(contagem)):
        if contagem[j] == maior_num:
            numero += [j]
            
    if range(len(numero)) != 1:
        for k in range(1, len(numero)):
            maior = numero[0]
            if numero[k] < maior:
                numero[k], numero[k - 1] = numero[k - 1], numero[k]
                maior = numero[k]
        for x in numero:
            print(x)
    else:
        print(numero_unico)


def main():
    n = int(input())
    contagem = contar_num(n)
    verificar(contagem)
main()