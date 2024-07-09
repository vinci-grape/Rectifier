source = raw_input()

if len(source) > 10 or len(source) < 1:
	print -1

max_i = 2 ** (len(source) - 1)

sum = 0

for i in range(max_i):
	plus = bin(i)[2:]
	number = 0
	working = source
	while plus.find('1')!= -1:
		i = plus.find('1')
		sum += float(working[:i + 1])
		plus = plus[i + 1:]
		working = working[i + 1:]
	sum += float(working)

print round(sum, 0)