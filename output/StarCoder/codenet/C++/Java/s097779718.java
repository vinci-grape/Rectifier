import java.util.Scanner;

public class s097779718 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		long A = sc.nextLong();
		long B = sc.nextLong();

		System.out.println(A * B / Euclid(A, B));
	}

	public static long Euclid(long x, long y) {
		long tmp;

		if (x < y) {
			tmp = x;
			x = y;
			y = tmp;
		}

		if (!(x%y)) return y;
		return Euclid(y, x%y);
	}
}