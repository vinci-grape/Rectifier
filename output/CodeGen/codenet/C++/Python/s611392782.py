#!/usr/bin/python

# ACM-ICPCアジア地区予選2014 B. Miscalculation

import sys

def mul(str, idx):
	res = str[idx] - '0'
	while idx + 1 < len(str) and str[idx + 1] == '*':
		idx += 2
		res *= str[idx] - '0'
	return res

def add(str, idx):
	res = mul(str, idx)
	while idx + 1 < len(str) and str[idx + 1] == '+':
		idx += 2
		res += mul(str, idx)
	return res

def bob(str, idx):
	res = str[idx] - '0'
	while idx + 1 < len(str):
		if str[idx + 1] == '+':
			res += str[idx + 2] - '0'
		else:
			res *= str[idx + 2] - '0'
		idx += 2
	return res

def main():
	str = sys.stdin.readline().strip()
	d = int(sys.stdin.readline().strip())
	idx = 0
	a = add(str, idx)
	idx = 0
	b = bob(str, idx)
	if a == d:
		print(b == d and "U" or "M")
	else:
		print(b == d and "L" or "I")

if __name__ == '__main__':
	main()