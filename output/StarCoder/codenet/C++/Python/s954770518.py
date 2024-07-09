s = [0]*11
for i in range(10):
    s[i] = int(input())
s.sort()
for i in range(9,6,-1):
    print(s[i])