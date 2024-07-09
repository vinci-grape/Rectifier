class BIT {
    private int[] tree;
    private int size;
    private int depth;
    public BIT(int N) {
        this.size = N;
        this.depth = (int)Math.ceil(Math.log(N) / Math.log(2));
        this.tree = new int[N + 1];
    }
    private int _bitsum(int i) {
        int ret = 0;
        while (i > 0) {
            ret += tree[i];
            i ^= i & -i;
        }
        return ret;
    }
    public int bitsum(int l, int r) {
        if (r == -1) {
            return _bitsum(l);
        } else {
            return _bitsum(r) - _bitsum(l);
        }
    }
    public void bitadd(int i, int x) {
        i++;
        while (i <= size) {
            tree[i] += x;
            i += i & -i;
        }
    }
}
public class atcoder_ABC107_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = n * (n + 1) / 2;
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Map<Integer, Integer> d = new HashMap<>();
        List<Integer> _a = new ArrayList<>();
        for (int x : a) {
            if (!d.containsKey(x)) {
                d.put(x, d.size());
                _a.add(x);
            }
        }
        for (int i = 0; i < n; i++) {
            a[i] = d.get(a[i]);
        }
        int[] b = new int[n + 1];
        for (int i = 0; i < n; i++) {
            b[i + 1] = (a[i] >= 0) ? 2 : 0;
        }
        BIT bit = new BIT(Math.max(b) + 1);
        int ans = 0;
        for (int x : b) {
            ans += bit.bitsum(x + 1);
            bit.bitadd(x, 1);
        }
        int l = 0, r = _a.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (check(mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        System.out.println(_a.get(l));
    }
    private static boolean check(int X) {
        int[] b = new int[n + 1];
        for (int i = 0; i < n; i++) {
            b[i + 1] = (a[i] >= X) ? 2 : 0;
        }
        BIT bit = new BIT(Math.max(b) + 1);
        int ans = 0;
        for (int x : b) {
            ans += bit.bitsum(x + 1);
            bit.bitadd(x, 1);
        }
        return ans >= m;
    }
}