def main(args):
    n = int(input())
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    h = [int(i) for i in input().split()]
    for i in range(0, MAX+1):
        for j in range(0, MAX+1):
            ch = check(n, x, y, h, i, j)
            if ch > 0:
                print(i, j, ch)

def check(n, x, y, h, cx, cy):
    ch = -1
    for i in range(0, n):
        if h[i] > 0:
            ch = abs(x[i] - cx) + abs(y[i] - cy) + h[i]
            break
    for i in range(0, n):
        if h[i]!= max(ch - abs(x[i] - cx) - abs(y[i] - cy), 0):
            return -1
    return ch