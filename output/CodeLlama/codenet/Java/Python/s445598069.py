import sys

n = int(sys.stdin.readline())

s = [0] * 100010

for i in range(n):
    s[int(sys.stdin.readline())] += 1

dec = 0

for i in range(len(s)):
    if s[i] != 0:
        if s[i] % 2 == 0:
            s[i] = 2
        else:
            s[i] = 1

one = 0
two = 0

for i in range(len(s)):
    if s[i] == 2:
        two += 1
    elif s[i] == 1:
        one += 1

if two % 2 != 0:
    one -= 1

print(two + one)