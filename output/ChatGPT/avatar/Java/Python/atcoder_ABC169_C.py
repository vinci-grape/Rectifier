import sys

a = int(sys.stdin.readline())
b = sys.stdin.readline().strip().replace(".", "")

result = (a * int(b)) // 100
print(result)