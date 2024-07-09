def main(args):
    n = int(input())
    b = int(input())
    ans = [0] * n
    q = []
    for i in range(n):
        t = int(input())
        d = int(input())
        while len(q) > 0 and q[0] <= t:
            q.pop(0)
        if len(q) <= b:
            ans[i] = (q.__len__() == 0) and t or q[-1] + d
            q.append(ans[i])
        else:
            ans[i] = -1
    for i in range(n):
        print(ans[i], end=' ')
    print()