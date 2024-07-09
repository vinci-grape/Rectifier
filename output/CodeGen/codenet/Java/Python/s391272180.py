def main():
	s,t = input().strip().split()
	s = list(s)
	t = list(t)
	flag = False
	for i in range(len(s)):
		s = rotate(s)
		if t == s:
			flag = True
			break
	if flag:
		print("Yes")
	else:
		print("No")

def rotate(s):
	len = len(s)
	t = s[0]
	for i in range(len-1):
		s[i] = s[i+1]
	s[len-1] = t
	return s

main()