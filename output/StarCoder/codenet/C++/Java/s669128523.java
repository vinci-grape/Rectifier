/*depth first search
not lie in stack
*/
import java.util.*;
public class s669128523 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[][] M = new int[n][n];
		int[] color = new int[n];
		int[] d = new int[n];
		int[] f = new int[n];
		int tt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				M[i][j] = 0;
			}
		}
		for (int i = 0; i < n; i++) {
			int u = sc.nextInt();
			int k = sc.nextInt();
			u--;
			for (int j = 0; j < k; j++) {
				int v = sc.nextInt();
				v--;
				M[u][v] = 1;
			}
		}
		for (int i = 0; i < n; i++) {
			color[i] = 0;
		}
		for (int u = 0; u < n; u++) {
			if (color[u] == 0) {
				dfs_visit(u);
			}
		}
		for (int i = 0; i < n; i++) {
			System.out.println(i + 1 + " " + d[i] + " " + f[i]);
		}
	}

	public static void dfs_visit(int u) {
		int v;
		color[u] = 1;
		d[u] = ++tt;
		for (v = 0; v < n; v++) {
			if (M[u][v] == 0)
				continue;
			if (color[v] == 0) {
				dfs_visit(v);
			}
		}
		color[u] = 2;
		f[u] = ++tt;
	}
}