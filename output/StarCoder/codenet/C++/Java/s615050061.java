import java.util.*;
import java.io.*;

public class s615050061 {

	public static void main(String[] args) throws Exception {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		char[] s = new char[n + 1];
		s[0] = '0';
		for (int i = 1; i <= n; i++)
			s[i] = sc.next().charAt(0);
		long[] f = new long[n + 1];
		int[] g = new int[n + 1];
		f[0] = 0;
		g[0] = 0;
		for (int i = 1; i <= n; i++) {
			if (s[i] == '+' || s[i] == '-') {
				f[i] = f[i - 1] + (s[i] == '+'? 1 : -1) * Math.pow(13131, g[i] = g[i - 1]);
			} else {
				f[i] = f[i - 1];
				g[i] = g[i - 1] + (s[i] == '<'? -1 : 1);
			}
		}
		Map<Long, Long> map = new HashMap<Long, Long>();
		long cnt = 0;
		for (int i = n; i > 0; i--) {
			if (map.containsKey(f[i]))
				cnt += map.get(f[i]);
			map.put(f[i] * Math.pow(13131, g[i - 1]) + f[i - 1], map.getOrDefault(f[i] * Math.pow(13131, g[i - 1]) + f[i - 1], 0) + 1);
		}
		System.out.println(cnt);
	}

}