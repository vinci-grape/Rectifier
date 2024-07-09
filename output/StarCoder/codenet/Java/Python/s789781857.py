import sys

n = int(raw_input().strip())
c = map(int, raw_input().strip().split(' '))
s = map(int, raw_input().strip().split(' '))
f = map(int, raw_input().strip().split(' '))

for i in range(n-1):
    time = s[i] + c[i]
    for j in range(i+1, n-1):
        if time % f[j]!= 0:
            time += f[j] - (time % f[j])
        if time < s[j]:
            time = s[j]
        time += c[j]
    print time
print 0