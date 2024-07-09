#!/usr/bin/python

import sys

def main():
	money = int(sys.argv[1])
	m = [int(x) for x in sys.argv[2:]]
	first = True
	for money, m in zip(sys.argv[2:], m):
		if not first:
			print
		first = False
		sum = 0
		num = [0] * 4
		for i in range(4):
			num[i] = int(sys.argv[i+2])
			sum += num[i] * m[i]
		change = sum - money
		for i in range(3, -1, -1):
			if change // m[i]:
				num[i] -= change // m[i]
				change %= m[i]
		for i in range(4):
			if num[i] > 0:
				print(m[i], num[i])

if __name__ == '__main__':
	main()