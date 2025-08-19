A, B, C = map(int, input().split())

X = A
Y = B
Z = C

if A > B:
  aux = A
  A = B 
  B = aux
if B > C:
  aux1 = B
  B = C
  C = aux1
if A > B:
    aux2 = A
    A = B
    B = aux2
  
print(f"{A}\n{B}\n{C}\n")
print(f"{X}\n{Y}\n{Z}")