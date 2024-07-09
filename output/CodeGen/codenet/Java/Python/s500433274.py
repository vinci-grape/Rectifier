import math
import sys

def main():
	a,b,c = [int(i) for i in sys.stdin.readline().split()]
	if a > b:
		c = a
	elif b > a:
		c = b
	else:
		c = a
	if a == c and b!= c:
		print("GREATER")
	elif b == c and a!= c:
		print("LESS")
	else:
		print("EQUAL")

if __name__ == "__main__":
	main()