import sys

def findS(k, i):
	s = 0
	while k % i == 0:
		s += 1
		k /= i
	return s

n = int(raw_input().strip())
ans = 1
mod = 1000000007
for i in range(2, n + 1):
	for j in range(2, i):
		if i % j!= 0 and j < i:
			if j == i:
				s = 0
				for k in range(1, n + 1):
					s += findS(k, i)
				ans = (ans * (s + 1)) % mod

print ans