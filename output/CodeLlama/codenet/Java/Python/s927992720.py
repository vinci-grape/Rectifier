while True:
    a = int(input())
    op = input()
    b = int(input())
    if op == '?':
        break
    if op == '+':
        print(a + b)
    if op == '-':
        print(a - b)
    if op == '*':
        print(a * b)
    if op == '/':
        print(a / b)