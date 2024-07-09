while True:
    a, S, b = input().split()
    a = int(a)
    b = int(b)
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