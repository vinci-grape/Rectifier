import java.util.Scanner;

public class s663381244 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int[] m = new int[4];
		m[0] = 10;
		m[1] = 50;
		m[2] = 100;
		m[3] = 500;

		boolean first = true;
		while(sc.hasNext()) {
			if(!first)
				System.out.println();

			first = false;
			int sum = 0;
			int[] num = new int[4];
			for(int i = 0; i < 4; ++i) {
				num[i] = sc.nextInt();
				sum += num[i] * m[i];
			}

			int change = sum - sc.nextInt();
			for(int i = 3; i >= 0; --i) {
				if(change / m[i] > 0) {
					num[i] -= change / m[i];
					change %= m[i];
				}
			}

			for(int i = 0; i < 4; ++i)
				if(num[i] > 0)
					System.out.println(m[i] + " " + num[i]);
		}

		sc.close();
	}
}