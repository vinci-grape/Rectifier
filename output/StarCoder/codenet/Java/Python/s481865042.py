import sys
s = raw_input()
k = long(raw_input())
sb = ''
for i in range(len(s)):
	if (26-(ord(s[i])-97))<=k and s[i]!='a':
		k-=26-(ord(s[i])-97)
		sb+='a'
	else:
		sb+=s[i]
if k>0:
	t=sb[len(s)-1]
	sb=sb[:len(s)-1]+chr((ord(t)-97+k)%26+97)
print sb