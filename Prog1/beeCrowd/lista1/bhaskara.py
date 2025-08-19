A, B, C = map(float, input().split())

Delta = B ** 2 - (4 * A * C)

if A == 0:
  print("Impossivel calcular")
elif Delta < 0:
  print("Impossivel calcular")
else:
  R1 = ((- B) + (Delta ** 0.5)) / (2 * A)
  R2 = ((- B) - (Delta ** 0.5)) / (2 * A)

  print(f"R1 = {R1:.5f}")
  print(f"R2 = {R2:.5f}")

