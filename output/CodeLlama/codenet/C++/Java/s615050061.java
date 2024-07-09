import java.util.*;

public class s615050061 {
	static final long B = 13131;
	static final int N = 500000 + 7;

	static int n;
	static char[] s;
	static long[] f;
	static int[] g;
	static Map<Long, Long> map;
	static long cnt;

	static long pow(long a, long k) {
		if (k < 0) k += (1L << 63) - 1;
		long t = 1;
		for (; k; a = a * a, k >>= 1)
			if (k & 1) t = t * a;
		return t;
	}

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		n = cin.nextInt();
		s = new char[n + 1];
		f = new long[n + 1];
		g = new int[n + 1];
		map = new HashMap<>();
		for (int i = 1; i <= n; ++i)
			if (s[i] == '+' || s[i] == '-')
				f[i] = f[i - 1] + (s[i] == '+' ? 1 : -1) * pow(B, g[i] = g[i - 1]);
			else
				f[i] = f[i - 1], g[i] = g[i - 1] + (s[i] == '<' ? -1 : 1);
		for (int i = n; i; --i)
			++map.getOrDefault(f[i], 0L), cnt += map.getOrDefault(f[n] * pow(B, g[i - 1]) + f[i - 1], 0L);
		System.out.println(cnt);
	}
}