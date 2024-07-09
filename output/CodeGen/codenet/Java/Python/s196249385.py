import sys
import itertools

def solve():
	n = int(sys.stdin.readline())
	k = int(sys.stdin.readline())
	a = [int(x) for x in sys.stdin.readline().split()]
	cumsum = [0]
	for i in range(len(a)):
		cumsum.append(cumsum[i] + a[i])
	b = []
	for i in range(len(a)):
		for j in range(i, len(a)):
			b.append(cumsum[j + 1] - cumsum[i])
	b.sort(reverse=True)
	mask = 1
	while mask > 0:
		tmp = []
		for e in b:
			if (e & mask)!= 0:
				tmp.append(e)
		if len(tmp) >= k:
			b = tmp
		mask >>= 1
	if len(b) < k:
		print(0)
	else:
		ans = -1
		for e in b:
			ans &= e
		print(ans)

if __name__ == '__main__':
	sys.stdin = open("/home/shiva/Learning/1.txt", 'r')
	solve()