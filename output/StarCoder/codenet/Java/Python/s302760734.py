import sys

s = sys.stdin.readline().strip()
t = sys.stdin.readline().strip()

for i in range(len(s)-len(t)+1):
    check = True
    for j in range(len(t)):
        if s[i+j]!= '?' and s[i+j]!= t[j]:
            check = False
    if check:
        for j in range(len(t)):
            s = s[:i+j] + t[j] + s[i+j+1:]
        break

if check:
    print(s)
else:
    print('UNRESTORABLE')