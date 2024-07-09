def main():
    N = int(input())
    M = int(input())
    H = [int(input()) for i in range(N)]
    ans = [True for i in range(N)]
    for i in range(M):
        temp1 = int(input())
        temp2 = int(input())
        if H[temp1-1] < H[temp2-1]:
            ans[temp1-1] = False
        elif H[temp1-1] > H[temp2-1]:
            ans[temp2-1] = False
        else:
            ans[temp1-1] = False
            ans[temp2-1] = False
    ans2 = 0
    for i in range(N):
        if ans[i]:
            ans2 += 1
    print(ans2)