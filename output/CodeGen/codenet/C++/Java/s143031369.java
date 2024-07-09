public class s143031369 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		Point[] P = new Point[n];
		for (int i = 0; i < n; i++) {
			P[i] = new Point();
			P[i].x = in.nextDouble();
			P[i].y = in.nextDouble();
		}
		int m = jarvis(P, n, ch);
		if (m == 2) {
			System.out.println("0.5");
			System.out.println("0.5");
		} else {
			double sum = 0;
			for (int i = 0; i < m; i++) {
				ang[ch[i]] = Math.PI - Math.acos(Math.cos(P[ch[i]].x, P[ch[i]].y, P[ch[(i - 1 + m) % m]].x, P[ch[(i + 1) % m]].y));
			}
			for (int i = 0; i < n; i++) {
				ans[i] = ang[i] / 2. / Math.PI;
			}
			for (int i = 0; i < n; i++) {
				System.out.println(ans[i]);
			}
		}
	}
}