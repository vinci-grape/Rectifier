import sys

c = sys.stdin.readline().strip()
letter = ord(c[0])
letter += 1

print(chr(letter))