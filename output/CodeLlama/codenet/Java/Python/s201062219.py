import sys
c = int(sys.stdin.readline())
mark = sys.stdin.readline()
b = int(sys.stdin.readline())
if mark == '?':
    a = 2000001
    break
elif mark == '+':
    a = c + b
elif mark == '-':
    a = c - b
elif mark == '*':
    a = c * b
elif mark == '/':
    a = c / b
x = 0
while True:
    if a == 2000001:
        break
    print(a)
    x += 1