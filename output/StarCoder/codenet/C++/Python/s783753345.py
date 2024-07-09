while True:
    a, S, b = map(int, input().split())
    if S == '+':
        print(a + b)
    elif S == '-':
        print(a - b)
    elif S == '*':
        print(a * b)
    elif S == '/':
        print(a / b)
    elif S == '?':
        break