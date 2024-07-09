def main(sh):
    s = scanner.Scanner(System.in)
    x = s.nextInt()
    y = s.nextInt()
    a = s.nextInt()
    b = s.nextInt()
    j = 2
    i = a
    x1 = 0
    y1 = 0
    c = 0
    ans = True
    c = max(x, y)
    if c > b:
        print("0")
        ans = False
    while c % min(x, y)!= 0 and ans:
        if x > y:
            c = x * j
            j += 1
        else:
            c = y * j
            j += 1
        if c > b:
            print("0")
            ans = False
            break
    if ans:
        i = a
        for i in range(a, b + 1):
            if i % c == 0:
                break
        if i!= b + 1:
            print(((b - i) // c) + 1)
        else:
            print("0")
    else:
        print("0")