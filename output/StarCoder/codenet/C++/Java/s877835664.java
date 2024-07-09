import java.util.*;
import java.io.*;
import java.lang.*;

public class s877835664 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int K = sc.nextInt();
		int[] A = new int[N + 1];
		for (int i = 1; i <= N; i++) {
			A[i] = sc.nextInt();
		}
		int cur = 1;
		int[] dic = new int[N + 1];
		for (int i = 1; i <= K; i++) {
			if (dic[cur] < 0) {
				dic[cur] = i;
				cur = A[cur];
			} else {
				int tmp = K - (dic[cur] - 1);
				tmp %= i - dic[cur];
				i = K - tmp;
			}
		}
		System.out.println(cur);
	}

}