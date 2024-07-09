stack = []

while True:
    a = int(input())
    if a == 0:
        print(stack.pop())
    else:
        stack.append(a)