import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class s853750785 {

	static int N, M;
	static int[] H;
	static List<Integer>[] G;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		H = new int[N];
		G = new ArrayList[N];
		for (int i = 0; i < N; i++) {
			G[i] = new ArrayList<>();
		}
		for (int i = 0; i < N; i++) {
			H[i] = Integer.parseInt(br.readLine());
		}
		for (int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int u = Integer.parseInt(st.nextToken()) - 1;
			int v = Integer.parseInt(st.nextToken()) - 1;
			G[u].add(v);
			G[v].add(u);
		}
		long ans = 0;
		for (int u = 0; u < N; u++) {
			boolean flag = true;
			for (int v : G[u]) {
				if (H[u] <= H[v]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				ans++;
			}
		}
		System.out.println(ans);
	}
}