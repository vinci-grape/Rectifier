import sys

s = sys.stdin.readline().strip()

if len(s) % 2 == 1:
    s = s[:-1]
else:
    s = s[:-2]

while len(s) > 0:
    if isEvenString(s):
        break
    s = s[:-2]

print(len(s))

def isEvenString(s):
    a = s[:len(s)//2]
    b = s[len(s)//2:]
    if a == b:
        return True
    else:
        return False