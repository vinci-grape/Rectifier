import java.util.Scanner;

public class s880494034 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int[] XS = new int[N];
		for (int i = 0; i < N; i++) {
			XS[i] = sc.nextInt();
		}
		sc.close();

		double m = 9999999999.0;
		for (int i = 1; i <= 100; i++) {
			double c = 0.0;
			for (int j = 0; j < N; j++) {
				c += Math.pow(XS[j] - i, 2);
			}
			if (m > c) {
				m = c;
			}
		}

		System.out.println(m);
	}

}