import java.util.Scanner;

public class s271114101 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		System.out.println((a + b == c || b + c == a || a + c == b) ? "Yes" : "No");
	}
}