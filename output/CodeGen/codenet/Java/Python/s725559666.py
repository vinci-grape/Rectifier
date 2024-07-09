def main():
	scan = Scanner(System.in)
	a = scan.nextInt()
	b = scan.nextInt()
	c = scan.nextInt()
	scan.close()
	if a < b and b < c and a < c:
		print("Yes")
	else:
		print("No")