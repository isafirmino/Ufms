A, B, C = map(float, input().split())

trian = A * C / 2
circ = 3.14159 * C ** 2
trap = (A + B) * C / 2
quad = B * B
retang = A * B

print(f"TRIANGULO: {trian:.3f}\nCIRCULO: {circ:.3f}\nTRAPEZIO: {trap:.3f}\nQUADRADO: {quad:.3f}\nRETANGULO: {retang:.3f}")