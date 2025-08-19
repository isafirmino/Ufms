def receber_lançamentos(n):
    lançamentos = list(map(int, input().split()))
    return lançamentos

def calcular_porcent(n, lançamentos, contagem):
    for face in lançamentos:
        contagem[face - 1] += 1

    porcentagens = []
    for cont in contagem:
        porcentagem = (cont / n) * 100
        porcentagens.append(f"{porcentagem:.2f}%")

    return porcentagens
        


def main():
    n = int(input())
    contagem = [0] * 13 
    lançamentos = receber_lançamentos(n)
    resultados = calcular_porcent(n, lançamentos, contagem)

    for i in range(13):
        print(f"Face {i+1}: {resultados[i]}")

main()