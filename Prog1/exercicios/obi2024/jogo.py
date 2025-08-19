#1 2 3 4
#1 2 3 4
#1 2 3 4

N, Q = map(int, input().split())


matriz = []
cont_vivo = []
for _ in range(N):
    matriz.append(int(input()))

for x in range(Q):
    for i in range(N):
        for j in range(N):
            if matriz[i][j] == 0:
                if matriz[i-1][j-1] == 1:
                    cont_vivo += 1
                elif matriz[i-1][j] == 1:
                    cont_vivo += 1
                elif matriz[i-1][j+1] == 1:
                    cont_vivo += 1
                elif matriz[i][j+1] == 1:
                    cont_vivo += 1
                elif matriz[i+1][j+1] == 1:
                    cont_vivo += 1
                elif matriz[i+1][j] == 1:
                    cont_vivo += 1
                elif matriz[i+1][j-1] == 1:
                    cont_vivo += 1
            if cont_vivo == 3:
                matriz[i][j] = 1

print(matriz)