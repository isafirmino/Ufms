def contagem_roubos(carneiros, sitios):
    quant_carneiros = 0
    quant_sitios = [0]*sitios
    i = 0
    while 0 <= i < sitios:
        if carneiros[i] > 0:
            quant_carneiros += 1
            quant_sitios[i] = 1
            
            if carneiros[i] % 2 == 0:
                carneiros[i] -= 1
                i -= 1
            elif carneiros[i] % 2 != 0:
                carneiros[i] -= 1
                i += 1
        else:
            break
    return quant_carneiros, quant_sitios

def calcular_total(carneiros):
    total = 0
    for i in range(len(carneiros)):
        total += carneiros[i]
    return total

def calcular_sitios(quant_sitios):
    total_sitios = 0
    for i in range(len(quant_sitios)):
        total_sitios += quant_sitios[i]
    return total_sitios
        
def main():
    sitios = int(input())
    carneiros = list(map(int, input().split()))[:sitios]
    total_carneiros = calcular_total(carneiros)
    quant_carneiros, quant_sitios = contagem_roubos(carneiros, sitios)
    total_sitios = calcular_sitios(quant_sitios)
    print(total_sitios, (total_carneiros - quant_carneiros))

main()
    