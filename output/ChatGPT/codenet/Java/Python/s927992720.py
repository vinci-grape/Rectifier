while True:
    a = int(input())
    op = input()
    b = int(input())
    
    if op == "?":
        break
    elif op == "+":
        print(a + b)
    elif op == "-":
        print(a - b)
    elif op == "*":
        print(a * b)
    elif op == "/":
        print(a / b)