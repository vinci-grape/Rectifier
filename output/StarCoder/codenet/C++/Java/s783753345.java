import java.util.*;
public class s783753345 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int a = sc.nextInt();
			char S = sc.next().charAt(0);
			int b = sc.nextInt();
			if (S == '+') System.out.println(a + b);
			if (S == '-') System.out.println(a - b);
			if (S == '*') System.out.println(a * b);
			if (S == '/') System.out.println(a / b);
			if (S == '?') break;
		}
	}
}