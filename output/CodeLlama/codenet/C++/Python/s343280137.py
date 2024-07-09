import sys

def main():
    input = sys.stdin.readline
    n,c = map(int,input().split())
    x = [0]*(n+1)
    v = [0]*(n+1)
    for i in range(1,n+1):
        x[i],v[i] = map(int,input().split())

    lefttotal = [0]*(n+1)
    maxlefttotal = [0]*(n+1)
    for i in range(1,n+1):
        lefttotal[i] = lefttotal[i-1] + v[i]

    for i in range(1,n+1):
        maxlefttotal[i] = max(maxlefttotal[i-1],lefttotal[i]-x[i])

    righttotal = [0]*(n+1)
    maxrighttotal = [0]*(n+1)
    for i in range(1,n+1):
        righttotal[i] = righttotal[i-1] + v[n-i+1]

    for i in range(1,n+1):
        maxrighttotal[i] = max(maxrighttotal[i-1],righttotal[i] -(c - x[n+1-i]))

    ans = 0

    for i in range(1,n+1):
        ans = max(ans,lefttotal[i]-x[i])
        ans = max(ans,lefttotal[i]-2*x[i]+maxrighttotal[n-i])
        ans = max(ans,righttotal[i]-(c -x[n+1-i]))
        ans = max(ans,righttotal[i]-2*(c-x[n+1-i])+maxlefttotal[n-i])

    print(ans)

if __name__ == "__main__":
    main()