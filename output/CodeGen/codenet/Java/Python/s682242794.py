import java.util.Scanner;

def main():
    sc = Scanner(System.in)
    for i in range(7):
        high = sc.nextInt()
        low = sc.nextInt()
        sa = high - low
        print(sa)

if __name__ == '__main__':
    main()