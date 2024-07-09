a = []
x = 0
while True:
    c = int(input())
    mark = input()
    b = int(input())
    
    if mark == "?":
        a.append(2000001)
        break
    elif mark == "+":
        a.append(c + b)
    elif mark == "-":
        a.append(c - b)
    elif mark == "*":
        a.append(c * b)
    elif mark == "/":
        a.append(c / b)
    
    x += 1

x = 0
while True:
    if a[x] == 2000001:
        break
    print(a[x])
    x += 1