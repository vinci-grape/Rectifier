import sys

N, K = map(int, sys.stdin.readline().split())
S = sys.stdin.readline().rstrip()
firstTime = True
step = 1
while K > 0:
    T = S[::-1]
    revU = S + T
    sDash = S
    for i in range(N, -1, -step):
        tmp = revU[i:i+N]
        if sDash > tmp:
            sDash = tmp
        else:
            if not firstTime:
                break
    if firstTime:
        firstTime = False
        if 2**K > N:
            c = sDash[0]
            for i in range(N):
                print(c, end='')
            print()
            sys.exit(0)
    step += step
    K -= 1
    S = sDash[::-1]
print(S)