E = int(input())
D = int(input())

if 0 <= E <= 5:
    if 0 <= D <= 5:
        if E != D:
            if E > D:
                resultado = E + D
            elif E < D:
                resultado = 2 * (D - E)

            print(resultado)

