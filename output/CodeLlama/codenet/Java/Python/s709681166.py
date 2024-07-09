import sys
s = sys.stdin.readline().strip()
for i in range(len(s)):
    c = s[i]
    if c.isupper():
        c = chr(ord(c) + 32)
        print(c, end='')
    elif c.islower():
        c = chr(ord(c) - 32)
        print(c, end='')
    else:
        print(c, end='')
print()