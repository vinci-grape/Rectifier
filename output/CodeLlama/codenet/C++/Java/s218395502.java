import java.util.Scanner;

public class s218395502 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		if ((100*a + 10*b + c) % 4 == 0) {
			System.out.println("YES");
		}
		else {
			System.out.println("NO");
		}
	}
}