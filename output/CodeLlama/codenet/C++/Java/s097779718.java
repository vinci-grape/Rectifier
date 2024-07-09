import java.util.Scanner;

public class s097779718 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long A = sc.nextLong();
		long B = sc.nextLong();
		long tmp;

		if (A < B) {
			tmp = A;
			A = B;
			B = tmp;
		}

		if (A % B == 0) {
			System.out.println(B);
		} else {
			System.out.println(Euclid(A, B));
		}
	}

	public static long Euclid(long x, long y) {
		long tmp;

		if (x < y) {
			tmp = x;
			x = y;
			y = tmp;
		}

		if (x % y == 0) {
			return y;
		} else {
			return Euclid(y, x % y);
		}
	}
}