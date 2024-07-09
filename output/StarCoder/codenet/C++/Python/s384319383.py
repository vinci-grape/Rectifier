from sys import stdin
from collections import Counter

def main():
	n = int(stdin.readline())
	s = stdin.readline().strip()
	cnt = Counter(s)
	ans = 1
	for i in range(26):
		ans *= cnt[chr(i + ord('a'))]
		ans %= 1000000007
	print(ans - 1)

if __name__ == "__main__":
	main()