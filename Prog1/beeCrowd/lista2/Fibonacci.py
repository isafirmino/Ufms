N = int(input())
output = ""
a = 0
b = 1
output = "0 1 "

for i in range (2, N):
    c = a + b
    output += f"{c}"
    a , b = b , c
    
    if i < N -1:
        output += " "
print (output)
    