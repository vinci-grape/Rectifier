n = int(input())
a, b, c = input().split()
ans = 0
for i in range(n):
    if a[i] == b[i] == c[i]:
        pass
    elif a[i] == b[i] or b[i] == c[i] or a[i] == c[i]:
        ans += 1
    else:
        ans += 2
print(ans)