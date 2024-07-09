import sys

def solve(testNumber, in, out):
    ans = 0
    K = int(in.readline())
    S = int(in.readline())
    wk = 0
    for x in range(0, K+1):
        for y in range(0, K+1):
            wk = S - x - y
            if(wk >= 0 and wk <= K):
                ans += 1
    out.write(str(ans) + '\n')

if __name__ == '__main__':
    solve(1, sys.stdin, sys.stdout)