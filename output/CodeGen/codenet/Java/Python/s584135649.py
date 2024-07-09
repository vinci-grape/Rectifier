import java.util.Scanner;

def main():
	sc = Scanner(System.in)
	
	i=0
	
	for i in range(1,5):
		n = sc.nextInt()
		if n==0:
			break
	
	print(i)

main()