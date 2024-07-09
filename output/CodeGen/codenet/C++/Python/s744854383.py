#!/usr/bin/python

import sys

def main():
	N = int(sys.argv[1])
	a = [int(x) for x in sys.stdin.readline().split()]
	idx = 1
	ans = 0
	for i in range(N):
		if a[i] == idx:
			idx += 1
		else:
			ans += 1
	if idx == 1:
		print -1
	else:
		print ans

if __name__ == '__main__':
	main()