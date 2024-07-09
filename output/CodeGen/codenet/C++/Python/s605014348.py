def div(n):
	if n%2 == 0: return 2
	s = int(n**0.5)
	for i in range(3, s+1, 2):
		if n%i == 0: return i
	return n