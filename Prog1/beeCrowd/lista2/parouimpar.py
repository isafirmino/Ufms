N = int(input())
output = ""

for i in range(N):
    X = int(input())

    if X == 0:
        output += "NULL"
    else:
        if X % 2 == 0:
            p_i = "EVEN"
        else: 
            p_i = "ODD"
        if X > 0:
            sinal = "POSITIVE"
        else:
            sinal = "NEGATIVE"
        output += f"{p_i} {sinal}"

    if i < N - 1:
        output += "\n"
    
print(output)

    