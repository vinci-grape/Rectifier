# Python code

n = int(input())
a = list(map(int, input().split()))

ans = 0
ok = True
while ok:
    for i in range(n):
        if a[i] % 2 == 1:
            print(ans)
            exit()
        else:
            a[i] //= 2
    ans += 1

print(ans)