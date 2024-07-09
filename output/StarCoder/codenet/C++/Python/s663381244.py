from sys import stdin, stdout

def main():
	m = [10, 50, 100, 500]
	first = True
	for line in stdin:
		if not first:
			stdout.write('\n')
		first = False

		money = int(line)
		sum = 0
		num = [0, 0, 0, 0]
		for i in range(4):
			num[i] = int(stdin.readline())
			sum += num[i] * m[i]

		change = sum - money
		for i in range(3, -1, -1):
			if change / m[i]:
				num[i] -= change / m[i]
				change %= m[i]

		for i in range(4):
			if num[i] > 0:
				stdout.write(str(m[i]) +'' + str(num[i]) + '\n')

if __name__ == '__main__':
	main()