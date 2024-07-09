n = int(input())
ans = [0]*n
for i in range(n-1):
    a = int(input())
    a -= 1
    ans[a] += 1
for i in ans:
    print(i)