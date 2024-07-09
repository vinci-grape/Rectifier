n, k = map(int, input().split())
d = [False] * 10
hantei = True

for i in range(k):
    a = int(input())
    d[a] = True

while True:
    x = n
    hantei = True
    while x:
        if d[x % 10]:
            hantei = False
            break
        x //= 10
    if hantei:
        print(n)
        break
    n += 1