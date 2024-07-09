import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

public class s764169243 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		List<Integer> a = new ArrayList<Integer>();
		for (int i = 0; i < N; i++) {
			a.add(sc.nextInt());
		}
		sc.close();
		int[] ans = new int[N];
		int left_seg = 0;
		for (int i = 0; i < N; i++) {
			ans[i] = (i + 1) * a.get(i) - left_seg;
			left_seg += a.get(i);
		}
		int right_seg = 0;
		for (int i = N - 1; i >= 0; i--) {
			ans[i] *= (N - i) + 1 - right_seg;
			right_seg += a.get(i);
		}
		System.out.println(sum(ans));
	}
	
	public static int sum(int[] a) {
		int sum = 0;
		for (int i = 0; i < a.length; i++) {
			sum += a[i];
		}
		return sum;
	}
}