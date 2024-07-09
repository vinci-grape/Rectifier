import java.util.Scanner;

public class s764169243 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int[] a = new int[N];
		for (int i = 0; i < N; i++) {
			a[i] = sc.nextInt();
		}
		int[] ans = new int[N];
		for (int i = 0; i < N; i++) {
			ans[i] = i + 1;
		}
		SegmentTree left_seg = new SegmentTree(N, 0);
		for (int i = 0; i < N; i++) {
			ans[a[i] - 1] *= i + 1 - left_seg.query(0, a[i] - 1);
			left_seg.update(a[i] - 1, i + 1);
		}
		SegmentTree right_seg = new SegmentTree(N, 0);
		for (int i = N - 1; i >= 0; i--) {
			ans[a[i] - 1] *= i + 1 - right_seg.query(0, a[i] - 1);
			right_seg.update(a[i] - 1, i + 1);
		}
		int sum = 0;
		for (int i = 0; i < N; i++) {
			sum += ans[i];
		}
		System.out.println(sum);
	}
}

class SegmentTree {

	int size;
	int default;
	int[] seg;

	public SegmentTree(int size, int default) {
		this.size = 2 << (size - 1).bitLength();
		this.default = default;
		this.seg = new int[2 * this.size - 1];
	}

	public int segfunc(int x, int y) {
		return Math.max(x, y);
	}

	public void update(int k, int x) {
		k += size - 1;
		seg[k] = x;
		while (k > 0) {
			k = (k - 1) / 2;
			seg[k] = segfunc(seg[2 * k + 1], seg[2 * k + 2]);
		}
	}

	public int query(int p, int q) {
		if (q <= p) {
			return default;
		}
		p += size - 1;
		q += size - 2;
		int ret = default;
		while (q - p > 1) {
			if (p % 2 == 0) {
				ret = segfunc(ret, seg[p]);
			}
			if (q % 2 == 1) {
				ret = segfunc(ret, seg[q]);
				q--;
			}
			p /= 2;
			q = (q - 1) / 2;
		}
		ret = segfunc(segfunc(ret, seg[p]), seg[q]);
		return ret;
	}
}