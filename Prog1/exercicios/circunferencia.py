r, px, py = map(float, input().split())
x, y = map(float, input().split())

dp = (((px - x)**2) + ((py - y)**2))**0.5

if dp <= r:
    print("O ponto pertence a circunferencia")
else:
    print("O ponto não pertence a circunferencia")