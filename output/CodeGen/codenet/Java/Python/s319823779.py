def main():
	sc = Scanner(System.in)
	a = sc.nextInt()
	b = sc.nextInt()
	c = sc.nextInt()
	x = sc.nextInt()
	
	res = 0
	
	for i in range(0, a+1):
		for j in range(0, b+1):
			for k in range(0, c+1):
				total = 500*i + 100*j + 50*k
				
				if total == x:
					res += 1
	
	print(res)

if __name__ == '__main__':
	main()