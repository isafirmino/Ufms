N = int(input())
contador = 0
num_in = 0
num_out = 0

while contador < N:
    x = int(input())
    if x >= 10 and x <= 20:
        num_in += 1
    else: 
        num_out += 1
    contador += 1
print(f"{num_in} in\n{num_out} out")
