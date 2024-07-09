def main(args):
    in = input()
    n = int(in)
    str = in.next()
    l = list(str)
    for i in range(n):
        if l[i]!= '4' and l[i]!= '7':
            t = 1
        else:
            t = 0
    if t == 1:
        print("NO")
    else:
        for i in range(n//2):
            x = x + int(l[i])
        for i in range(n-1,n//2-1,-1):
            y = y + int(l[i])
        if x == y:
            print("YES")
        else:
            print("NO")