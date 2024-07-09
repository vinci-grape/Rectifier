import java.util.Scanner;

public class s698205968 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int m, f, r;
		while (sc.hasNextInt()) {
			m = sc.nextInt();
			f = sc.nextInt();
			r = sc.nextInt();
			if (m == -1 || f == -1) System.out.println("F");
			else if (m + f >= 80) System.out.println("A");
			else if (m + f >= 65) System.out.println("B");
			else if (m + f >= 50 || r >= 50) System.out.println("C");
			else if (m + f >= 30) System.out.println("D");
			else System.out.println("F");
		}
	}
}