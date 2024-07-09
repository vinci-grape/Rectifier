import java.util.Scanner;

public class s978355948 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int X = sc.nextInt();
		int[] L = new int[N];
		for (int i = 0; i < N; i++) {
			L[i] = sc.nextInt();
		}
		int i = 0;
		int d = 0;
		for (i = 0; i < N; i++) {
			d = d + L[i];
			if (d > X) {
				break;
			}
		}
		System.out.println(i + 1);
	}
}