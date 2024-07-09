import decimal

a, b = map(decimal.Decimal, input().split())
mul = a * b
print(str(mul).split('.')[0])