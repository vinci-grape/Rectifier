public class s663381244 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int money;
		int[] m = {10, 50, 100, 500};
		int sum = 0;
		int[] num = new int[4];
		for (int i = 0; i < 4; i++) {
			num[i] = in.nextInt();
			sum += num[i] * m[i];
		}
		int change = sum - money;
		for (int i = 3; i >= 0; i--) {
			if (change / m[i]) {
				num[i] = num[i] - change / m[i];
				change %= m[i];
			}
		}
		for (int i = 0; i < 4; i++) {
			if (num[i] > 0) {
				System.out.println(m[i] + " " + num[i]);
			}
		}
	}
}