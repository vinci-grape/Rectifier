A = int(input())
B = int(input())
ans = 0
out = 1

while out < B:
    out -= 1
    out += A
    ans += 1

print(ans)