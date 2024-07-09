import sys
n = int(sys.stdin.readline())
ch = []
s1 = 0
s2 = 0
for i in range(n):
    x, y = map(int, sys.stdin.readline().split())
    temp1 = s1 + x
    temp2 = s2 + y
    if abs(temp1 - s2) <= 500:
        s1 += x
        ch.append('A')
        continue
    if abs(temp2 - s1) <= 500:
        s2 += y
        ch.append('G')
        continue
    print(-1)
    break
else:
    print(''.join(ch))