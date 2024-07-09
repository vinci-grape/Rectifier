s = []
for i in range(10):
    s.append(int(input()))

s.sort()
for i in range(9, 6, -1):
    print(s[i])