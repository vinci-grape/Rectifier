s = raw_input()
v = [0]*26
for i in s:
	v[ord(i)-ord('a')] += 1
ans = "Yes"
for i in range(26):
	if v[i] % 2!= 0:
		ans = "No"
		break
print ans