import math

n, p = map(int, raw_input().split())
a = map(int, raw_input().split())

b = 0
c = 0

for i in a:
	if i % 2 == 0:
		b += 1
	else:
		c += 1

bsum = 2**b

if p == 0:
	csum = 0
	for i in range(c+1):
		if i % 2 == 0:
			csum += math.factorial(c) / (math.factorial(i) * math.factorial(c-i))
else:
	csum = 0
	for i in range(c+1):
		if i % 2 == 1:
			csum += math.factorial(c) / (math.factorial(i) * math.factorial(c-i))

print bsum*csum