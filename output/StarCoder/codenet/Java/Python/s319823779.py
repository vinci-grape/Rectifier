import sys

a = int(sys.stdin.readline())
b = int(sys.stdin.readline())
c = int(sys.stdin.readline())
x = int(sys.stdin.readline())

res = 0

for i in range(a+1):
	for j in range(b+1):
		for k in range(c+1):
			total = 500*i + 100*j + 50*k
			if total == x:
				res += 1

print(res)