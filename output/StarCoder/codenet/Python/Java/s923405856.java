import java.util.*;

public class s923405856 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0)
				break;
			int res = -1111111111;
			int s = 0;
			for (int i = 0; i < n; i++) {
				int a = sc.nextInt();
				s = Math.max(s + a, a);
				res = Math.max(s, res);
			}
			System.out.println(res);
		}
	}

}