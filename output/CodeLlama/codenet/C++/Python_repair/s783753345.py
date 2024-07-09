while True:
    a, S, b = input().split()
    if S == '+':
        print(int(a) + int(b))
    elif S == '-':
        print(int(a) - int(b))
    elif S == '*':
        print(int(a) * int(b))
    elif S == '/':
        print(int(a) / int(b))
    elif S == '?':
        break