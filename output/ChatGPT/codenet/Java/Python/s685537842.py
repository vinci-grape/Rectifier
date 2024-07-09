a, b, t = map(int, input().split())
time = 0
count = 0
while time < t + 0.5:
    count += b
    time += a
    if time > t + 0.5:
        count -= b
        break
print(count)