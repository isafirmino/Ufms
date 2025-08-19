SALARIO = float(input())

SALARIO_INICIAL = SALARIO

if SALARIO >= 0 and SALARIO <= 400.00:
    PORCENT = 15
    SALARIO = SALARIO * 1.15
elif SALARIO >= 400.01 and SALARIO <= 800.00:
    PORCENT = 12
    SALARIO = SALARIO * 1.12
elif SALARIO >= 800.01 and SALARIO <= 1200.00:
    PORCENT = 10
    SALARIO = SALARIO * 1.10
elif SALARIO >= 1200.01 and SALARIO <= 2000.00:
    PORCENT = 7
    SALARIO = SALARIO * 1.07
else:
    PORCENT = 4
    SALARIO = SALARIO * 1.04

print(f"Novo salario: {SALARIO:.2f}\nReajuste ganho: {SALARIO - SALARIO_INICIAL:.2f}\nEm percentual: {PORCENT} %")