import java.util.Scanner;

def main():
	scanner = Scanner(System.in)
	w = scanner.nextInt()
	h = scanner.nextInt()
	n = scanner.nextInt()
	x = [scanner.nextInt() for i in range(n)]
	y = [scanner.nextInt() for i in range(n)]
	a = [scanner.nextInt() for i in range(n)]
	xmin = max(xmin, min(x))
	xmax = min(xmax, max(x))
	ymin = max(ymin, min(y))
	ymax = min(ymax, max(y))
	w = max(xmax-xmin, 0)
	h = max(ymax-ymin, 0)
	print(w*h)

if __name__ == '__main__':
	main()