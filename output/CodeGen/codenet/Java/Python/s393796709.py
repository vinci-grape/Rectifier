def f(n):
    res = 1
    for i in range(2,n+1):
        res = (res*i)%MOD
    return res

def solve(in):
    xx = toInts(in.readline())
    min = min(xx[0], xx[1])
    max = max(xx[0], xx[1])
    if min == max:
        res = (2*f(min)*f(min))%MOD
    elif min + 1 == max:
        res = (f(min)*(f(max)*max)%MOD)
    else:
        res = 0
    print(res)

def toInt(s):
    return int(s)

def toInts(s):
    return [toInt(x) for x in s.split()]

def e(o):
    print(o)

if __name__ == '__main__':
    in = sys.stdin
    solve(in)