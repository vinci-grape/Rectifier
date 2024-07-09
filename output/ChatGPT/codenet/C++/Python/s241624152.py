a, b = map(int, input().split())
ans = ""
if a == 1 or b == 1:
    if a == 1 and b == 1:
        ans = "Draw"
    elif a == 1:
        ans = "Alice"
    else:
        ans = "Bob"
else:
    if a == b:
        ans = "Draw"
    elif a > b:
        ans = "Alice"
    else:
        ans = "Bob"
print(ans)