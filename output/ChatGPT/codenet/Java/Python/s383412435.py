n = int(input())
a = list(map(int, input().split()))

a.sort()

ans = 0

if n == 1 and a[0] > 1:
    ans = 1
else:
    for j in range(n):
        if j == 0 or a[j] != a[j - 1]:
            tmp = 1
            for i in range(j+1, n):
                if a[j] == a[i]:
                    tmp += 1
                else:
                    break
            
            if tmp > a[j]:
                ans += tmp - a[j]
            elif tmp < a[j]:
                ans += tmp

print(ans)