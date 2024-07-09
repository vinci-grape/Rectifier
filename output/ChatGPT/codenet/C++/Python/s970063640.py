n = int(input())
a = int(input())
sum = 0
s = []
for i in range(n):
    s.append(int(input()))
s.sort()
for i in range(n-1, n-a-1, -1):
    sum += s[i]
print(sum)