import java.util.*;

def main():
    N = int(input())
    Q = int(input())
    s = input()
    pre = [0] * (N + 1)
    for i in range(1, N):
        if s[i-1] == 'A' and s[i] == 'C':
            pre[i] = 1
    for i in range(1, N):
        pre[i] += pre[i-1]
    while Q > 0:
        l = int(input())
        r = int(input())
        r -= 1
        print(pre[r] - pre[l-1])
        Q -= 1

main()