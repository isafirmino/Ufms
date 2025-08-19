V = int(input())
if 0 <= V <= 2000:
    A = int(input())
    if 1 <= A <= 1000:
        F = int(input())
        if 1 <= F <= 1000:
            P = int(input())
            if 1 <= P <= 1000:
                contador = 0
                if A > F:
                    A, F = F, A
                if F > P:
                    F, P = P, F
                if A > F:
                    A, F = F, A
                if V > 0:
                    V = V - A
                    if V > 0:
                        contador += 1
                        V = V - F
                        if V > 0:
                            contador += 1
                            V = V - P
                            if V >= 0:
                                contador += 1
                        
                print(contador)