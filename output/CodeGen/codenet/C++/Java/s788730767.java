public class s788730767 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int p = in.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = in.nextInt();
		}
		int b = 0, c = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0) {
				b++;
			}
			else {
				c++;
			}
		}
		//cout << "b:" << b << " c:" << c << endl;
		long bsum = 0, csum = 0;
		bsum = (long)Math.pow(2, b);
		if (p == 0) {
			for (int i = 0; i <= c; i++) {
				if (i % 2 == 0) {
					csum += nCr(c, i);
				}
			}
		}
		else {
			for (int i = 0; i <= c; i++) {
				if (i % 2 == 1) {
					csum += nCr(c, i);
				}
			}
		}
		long ans = bsum * csum;
		System.out.println(ans);
	}
}