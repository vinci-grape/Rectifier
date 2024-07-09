import java.util.Scanner;

public class s764169243 {
    
    // SegmentTree Class
    static class SegmentTree {
        
        private int size;
        private int[] seg;
        private int defaultVal;
        
        // 初期化
        public SegmentTree(int size, int defaultVal) {
            this.size = 1 << (32 - Integer.numberOfLeadingZeros(size - 1));
            this.defaultVal = defaultVal;
            this.seg = new int[2 * this.size - 1];
            for (int i = 0; i < 2 * this.size - 1; i++) {
                this.seg[i] = defaultVal;
            }
        }
        
        // function(max, min, plus, minus, etc...)
        public int segfunc(int x, int y) {
            return Math.max(x, y);
        }
        
        // update
        public void update(int k, int x) {
            k += this.size - 1;
            this.seg[k] = x;
            while (k > 0) {
                k = (k - 1) / 2;
                this.seg[k] = segfunc(this.seg[2 * k + 1], this.seg[2 * k + 2]);
            }
        }
        
        // query([p,q)のsegfunc)
        public int query(int p, int q) {
            if (q <= p) {
                return this.defaultVal;
            }
            p += this.size - 1;
            q += this.size - 2;
            int ret = this.defaultVal;
            while (q - p > 1) {
                if (p % 2 == 0) {
                    ret = segfunc(ret, this.seg[p]);
                }
                if (q % 2 == 1) {
                    ret = segfunc(ret, this.seg[q]);
                    q--;
                }
                p = p / 2;
                q = (q - 1) / 2;
            }
            ret = segfunc(segfunc(ret, this.seg[p]), this.seg[q]);
            return ret;
        }
        
        // seg確認用
        public void segPrint() {
            for (int i = 0; i < 2 * this.size - 1; i++) {
                System.out.print(this.seg[i] + " ");
            }
            System.out.println();
        }
    }
    
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
        
        SegmentTree leftSeg = new SegmentTree(N, 0);
        for (int i = 0; i < N; i++) {
            int num = a[i];
            ans[num - 1] *= i + 1 - leftSeg.query(0, num);
            leftSeg.update(num - 1, i + 1);
        }
        
        SegmentTree rightSeg = new SegmentTree(N, 0);
        for (int i = N - 1; i >= 0; i--) {
            int num = a[i];
            ans[num - 1] *= N - i - rightSeg.query(0, num);
            rightSeg.update(num - 1, N - i);
        }
        
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += ans[i];
        }
        
        System.out.println(sum);
    }
}