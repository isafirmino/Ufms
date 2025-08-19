A, B, C, D = map(float, input().split())

media = ((A * 2) + (B * 3) + (C * 4) + (D)) / 10
print(f"Media: {media:.1f}")

if media >= 7.0:
  print("Aluno aprovado.")
elif media < 5.0:
  print("Aluno reprovado.")
else:
  print("Aluno em exame.")
  nota = float(input())
  print(f"Nota do exame: {nota:.1f}")
  nova_media = (media + nota) / 2
  if nova_media >= 5.0:
    print("Aluno aprovado.")
  else:
    print("Aluno reprovado.")
  print(f"Media final: {nova_media:.1f}")