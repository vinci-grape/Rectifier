import sys
import math

def solve():
	n = int(raw_input())
	k = int(raw_input())

	a = []
	for i in range(n):
		a.append(int(raw_input()))

	cumsum = [0] * (n + 1)
	for i in range(n):
		cumsum[i + 1] = cumsum[i] + a[i]

	b = []
	max = 0
	for i in range(n):
		for j in range(i, n):
			b.append(cumsum[j + 1] - cumsum[i])
			max = max(max, cumsum[j + 1] - cumsum[i])

	mask = 1
	while mask <= max:
		tmp = []
		for e in b:
			if (e & mask)!= 0:
				tmp.append(e)

		if len(tmp) >= k:
			b = tmp

		mask <<= 1

	if len(b) < k:
		print 0
	else:
		ans = -1
		for e in b:
			ans &= e

		print ans

# ---------------------------------------------------

solve()