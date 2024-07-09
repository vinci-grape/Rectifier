import sys

def main():
	while True:
		n = int(raw_input())
		if n == 0:
			break
		st = [False]*7
		for i in xrange(n):
			t = int(raw_input())
			ans = ''
			for j in xrange(7):
				ans += '1' if st[j] ^ seg[t][j] else '0'
				st[j] = seg[t][j]
			print ans

if __name__ == '__main__':
	main()