w, a, b = map(int, input().split())

answer = max(a, b) - min(a, b) - w
if answer < 0:
    print(0)
else:
    print(answer)