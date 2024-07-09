import sys

def isLatinLetter(c):
    return c >= 'a' and c <= 'z'

def isPunctuation(c):
    if c == '.':
        return True
    if c == ',':
        return True
    if c == '!':
        return True
    if c == '?':
        return True
    return False

s = sys.stdin.readline()
sb = []
n = len(s)
sb.append(s[0])
for i in range(1, n):
    c = s[i]
    if isLatinLetter(c):
        if not isLatinLetter(s[i - 1]):
            sb.append(' ')
        sb.append(c)
    elif isPunctuation(c):
        sb.append(c)

print(''.join(sb))