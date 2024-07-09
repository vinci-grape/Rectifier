# Python code
s = input()
length = len(s)
ch = ''
for i in range(length - 1, -1, -1):
    if s[i] != ' ' and s[i] != '?':
        ch = s[i]
        break
ch = ch.lower()
if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y':
    print("YES")
else:
    print("NO")