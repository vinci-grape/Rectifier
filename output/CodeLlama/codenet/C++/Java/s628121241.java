import java.util.Scanner;

public class s628121241 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int R = sc.nextInt();
		if (R < 1200)
			System.out.println("ABC");
		else if (R >= 2800)
			System.out.println("AGC");
		else
			System.out.println("ARC");
	}
}