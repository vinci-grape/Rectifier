import sys

def read():
	if not sys.stdin.readline():
		return False
	return True

def solve():
	ans = 0
	for i in range(1, 600 / d + 1):
		x = i * d
		y = x * x
		ans += y * d
	return ans

while read():
	print solve()