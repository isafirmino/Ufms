A, B, C = map(float, input().split())

if A < B:
  aux = A
  A = B 
  B = aux
if B < C:
  aux1 = B
  B = C
  C = aux1
if A < B:
    aux2 = A
    A = B
    B = aux2
    
if A >= (B + C):
  print("NAO FORMA TRIANGULO")
elif (A ** 2) == ((B ** 2) + (C ** 2)):
  print("TRIANGULO RETANGULO")
elif (A ** 2) > ((B ** 2) + (C ** 2)):
  print("TRIANGULO OBTUSANGULO")
elif (A ** 2) < ((B ** 2) + (C ** 2)):
  print("TRIANGULO ACUTANGULO")
if A == B and B == C:
  print("TRIANGULO EQUILATERO")
elif A == B or B == C or A == C:
  print("TRIANGULO ISOSCELES")
  
