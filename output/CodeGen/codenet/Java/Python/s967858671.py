import java.util.Scanner;

def main():
	Num = [0] * 11
	n = Scanner(System.in)
	for i in range(10):
		Num[i] = n.nextInt()
	for i in range(9, -1, -1):
		for j in range(i):
			if Num[j] < Num[j+1]:
				Num[10], Num[j] = Num[j], Num[j+1]
				Num[j+1] = Num[10]
	print(Num[0])
	print(Num[1])
	print(Num[2])

if __name__ == '__main__':
	main()