def fazer_vetor(T):
    N = []
    for i in range(1000):
        valor = i % T
        N.append(valor)
    return N
         

def main():
    T = int(input())
    N = fazer_vetor(T)
    for i in range(1000):
        print(f"N[{i}] = {N[i]}")

main()