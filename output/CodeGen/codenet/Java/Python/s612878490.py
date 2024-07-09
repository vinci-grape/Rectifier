import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

import static java.lang.Integer.parseInt;

class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String line;
		String[] words;

		line = br.readLine();

		int N, M;
		N = parseInt(line.substring(0, line.indexOf(' ')));
		M = parseInt(line.substring(line.indexOf(' ') + 1));

		int[] shortage = new int[M];

		for (int i = 0; i < M; i++) {
			line = br.readLine();
			int A = parseInt(line.substring(0, line.indexOf(' ')));
			shortage[i] = N > A? N - A : 0;
		}

		Arrays.sort(shortage);

		int ans = 0;

		for (int i = 0; i < M - 1; i++) {
			ans += shortage[i];
		}

		System.out.println(ans);

	}
}