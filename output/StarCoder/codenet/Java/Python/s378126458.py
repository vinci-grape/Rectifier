import sys

def main():
    N, Q = map(int, raw_input().split())
    s = raw_input()
    pre = [0]*(N+1)
    for i in range(1, N):
        if s[i-1] == 'A' and s[i] == 'C':
            pre[i] = 1
    for i in range(1, N):
        pre[i] += pre[i-1]
    while Q > 0:
        l, r = map(int, raw_input().split())
        r -= 1
        print pre[r] - pre[l-1]
        Q -= 1

if __name__ == "__main__":
    main()