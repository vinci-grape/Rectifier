import sys
s = sys.stdin.readline().strip()
flag = 0
for i in range(len(s)):
    if i % 2 == 0:
        if s[i] != 'R' and s[i] != 'U' and s[i] != 'D':
            flag = 1
            break
    else:
        if s[i] != 'L' and s[i] != 'U' and s[i] != 'D':
            flag = 1
            break
if flag == 0:
    print('Yes')
else:
    print('No')