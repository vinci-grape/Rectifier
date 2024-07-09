import sys

a = int(sys.stdin.readline().rstrip())
b = sys.stdin.readline().rstrip()
b = b.replace('.', '')
b = int(b)
result = (a * b) // 100
print(result)