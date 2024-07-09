import sys
s = sys.stdin.readline().strip()
k = int(sys.stdin.readline().strip())
sb = ""
for i in range(len(s)):
    if (26-(ord(s[i])-ord('a'))) <= k and s[i] != 'a':
        k -= 26-(ord(s[i])-ord('a'))
        sb += 'a'
    else:
        sb += s[i]
if k > 0:
    t = sb[len(s)-1]
    sb = sb[:len(s)-1]
    sb += chr((ord(t)-ord('a')+(k)%26)+ord('a'))
print(sb)