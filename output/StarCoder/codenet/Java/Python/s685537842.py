import sys

a = int(sys.stdin.readline())
b = int(sys.stdin.readline())
t = int(sys.stdin.readline())

time = 0
count = 0

while time < t + 0.5:
	count += b
	time += a
	if time > t + 0.5:
		count -= b
		break

print(count)