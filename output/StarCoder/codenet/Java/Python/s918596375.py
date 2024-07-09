import sys

def solve(s):
	a = ["a","e","i","o","u"]
	for i in a:
		if i.lower() == s.lower():
			return "vowel"
	return "consonant"

s = sys.stdin.readline().strip()
print(solve(s))