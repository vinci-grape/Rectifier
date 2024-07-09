a = int(input())
b = int(input())
if a > b:
    result = 2 * a - 1
elif a == b:
    result = 2 * a
else:
    result = 2 * b - 1
print(result)