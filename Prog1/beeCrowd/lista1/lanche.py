A, B = map(int, input().split())

X = 0
if A == 1:
  X = 4.00
elif A == 2:
  X = 4.50
elif A == 3:
  X = 5.00
elif A == 4:
  X = 2.00
elif A == 5:
  X = 1.50

total = X * B
print(f"Total: R$ {total:.2f}")