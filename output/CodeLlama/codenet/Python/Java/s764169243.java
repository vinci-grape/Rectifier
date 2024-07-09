import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class s764169243 {
	
	// SegmentTree Class
	static class SegmentTree {
		
		// 初期化
		public SegmentTree(int size, int default_value) {
			this.size = 2**(size-1).bitLength();
			this.default_value = default_value;
			this.seg = new int[2*this.size-1];
			for (int i = 0; i < this.seg.length; i++) {
				this.seg[i] = default_value;
			}
		}
		
		// function(max, min, plus, minus, etc...)
		public int segfunc(int x, int y) {
			return Math.max(x,y);
		}
		
		// update
		public void update(int k, int x) {
			k += this.size-1;
			this.seg[k] = x;
			while (k > 0) {
				k = (k-1)/2;
				this.seg[k] = this.segfunc(this.seg[2*k+1],this.seg[2*k+2]);
			}
		}
		
		// query([p,q)のsegfunc)
		public int query(int p, int q) {
			if (q <= p) {
				return this.default_value;
			}
			p += this.size-1;q += this.size-2;
			int ret = this.default_value;
			while (q-p > 1) {
				if (p%2 == 0) {
					ret = this.segfunc(ret,this.seg[p]);
				}
				if (q%2 == 1) {
					ret = this.segfunc(ret,this.seg[q]);
					q -= 1;
				}
				p = p/2;
				q = (q-1)/2;
			}
			ret = this.segfunc(this.segfunc(ret,this.seg[p]),this.seg[q]);
			return ret;
		}
		
		// seg確認用
		public void seg_print() {
			System.out.println(this.seg);
		}
		
		private int size;
		private int default_value;
		private int[] seg;
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int[] a = new int[N];
		for (int i = 0; i < N; i++) {
			a[i] = Integer.parseInt(st.nextToken());
		}
		int[] ans = new int[N];
		for (int i = 0; i < N; i++) {
			ans[i] = i+1;
		}
		SegmentTree left_seg = new SegmentTree(N, 0);
		for (int i = 0; i < N; i++) {
			ans[a[i]-1] *= i + 1 - left_seg.query(0,a[i]);
			left_seg.update(a[i]-1, i+1);
		}
		SegmentTree right_seg = new SegmentTree(N, 0);
		for (int i = 0; i < N; i++) {
			ans[a[N-1-i]-1] *= i + 1 - right_seg.query(0,a[N-1-i]);
			right_seg.update(a[N-1-i]-1, i+1);
		}
		
		int sum = 0;
		for (int i = 0; i < N; i++) {
			sum += ans[i];
		}
		System.out.println(sum);
	}
}