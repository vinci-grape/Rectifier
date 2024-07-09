import sys

MOD = 1000000007

def solve(in):
    xx = map(int, in.readline().split())
    min = min(xx)
    max = max(xx)
    if min == max:
        f = f(min)
        res = (2*f*f)%MOD
    elif min + 1 == max:
        f = f(min)
        res = (f*((f*max)%MOD))%MOD
    else:
        res = 0
    print res

def f(n):
    res = 1
    for i in range(2, n+1):
        res = (res*i)%MOD
    return res

if __name__ == '__main__':
    solve(sys.stdin)