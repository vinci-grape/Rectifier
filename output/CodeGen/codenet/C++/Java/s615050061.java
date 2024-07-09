public class s615050061 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String s = in.next();
		int[] f = new int[n + 1];
		int[] g = new int[n + 1];
		for (int i = 1; i <= n; i++) {
			if (s.charAt(i) == '+')
				f[i] = f[i - 1] + 1;
			else if (s.charAt(i) == '-')
				f[i] = f[i - 1] - 1;
			else
				f[i] = f[i - 1];
			g[i] = g[i - 1] + (s.charAt(i) == '<'? -1 : 1);
		}
		for (int i = n; i; --i)
			f[i] = f[n] * pow(B, g[i - 1]);
		int cnt = 0;
		Map<Integer, Integer> map = new HashMap<>();
		for (int i = 0; i <= n; i++) {
			if (map.containsKey(f[i]))
				cnt += map.get(f[i]);
			else
				map.put(f[i], 1);
		}
		System.out.println(cnt);
	}
}