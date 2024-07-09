import sys
for line in sys.stdin:
    line = line.strip()
    if line == '0 0':
        break
    c, op, b = line.split()
    if op == '?':
        print(2000001)
        break
    if op == '+':
        print(int(c) + int(b))
    elif op == '-':
        print(int(c) - int(b))
    elif op == '*':
        print(int(c) * int(b))
    elif op == '/':
        print(int(c) / int(b))