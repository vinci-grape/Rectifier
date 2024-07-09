import sys
input = sys.stdin.readline

s = input().rstrip()
cnt = 0
tmp = 0
for i in range(len(s)):
    if s[i] == 'A':
        tmp += 1
    elif s[i] == 'D':
        cnt += tmp
    else:
        tmp = 0
print(cnt)