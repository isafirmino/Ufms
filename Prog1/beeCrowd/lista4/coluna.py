def fazer_matriz(L, vetor):
    matriz = []
    for _ in range(12):
        nova_linha = []
        for _ in range(12):
            novo_elem = float(input())
            nova_linha.append(novo_elem)
        matriz.append(nova_linha)

    soma = 0
    for i in range(12):
        soma += matriz[i][L]

    media = 0
    if vetor == "S":
        print(f"{soma:.1f}")
    elif vetor == "M":
        media = soma / 12
        print(f"{media:.1f}")

    

def main():
    L = int(input())
    if 0 <= L <= 11:
        vetor = str(input())
        fazer_matriz(L, vetor)
        
main()