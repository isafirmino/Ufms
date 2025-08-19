P = int(input())
if 0 <= P <= 100:
    P = P * 1
    D = int(input())
    if 0 <= D <= 100:
        D = D * 2
        B = int(input()) * 3
        soma = P + D + B
        if soma >= 150:
            print("B")
        elif soma >= 120:
            print("D")
        elif soma >= 100:
            print("P")
        else:
            print("N")
