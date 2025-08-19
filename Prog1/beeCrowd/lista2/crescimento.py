T = int(input())
output = ""

for i in range (T):
    PA, PB, G1, G2 = input().split()
    PA = int(PA)
    PB = int(PB)
    G1 = float(G1)
    G2 = float(G2)

    ano = 0 
    while PA <= PB and ano <= 100:
        PA = int(PA + PA * G1 / 100)
        PB = int(PB + PB * G2 / 100)
        ano += 1

    if ano > 100:
        output += "Mais de 1 seculo."
    else: 
        output += f"{ano} anos."
    
    if i < T - 1:
        output += "\n"

print(output)
