class BIT {
    int size;
    int[] tree;
    int depth;

    public BIT(int N) {
        size = N;
        tree = new int[N + 1];
        depth = Integer.bitCount(N);
    }

    private int _bitsum(int i) {
        int ret = 0;
        while (i != 0) {
            ret += tree[i];
            i ^= i & -i;
        }
        return ret;
    }

    public int bitsum(int l, Integer r) {
        if (r == null) {
            return _bitsum(l);
        } else {
            return _bitsum(r) - _bitsum(l);
        }
    }

    public void bitadd(int i, int x) {
        i += 1;
        while (i <= size) {
            tree[i] += x;
            i += i & -i;
        }
    }
}

public class atcoder_ABC107_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = n * (n + 1) / 4;
        int[] a = new int[n];
        Map<Integer, Integer> d = new HashMap<>();
        List<Integer> _a = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            _a.add(a[i]);
        }
        
        _a.add(0);
        Collections.sort(_a);
        
        for (int i = 0; i < _a.size(); i++) {
            d.put(_a.get(i), i);
        }
        
        for (int i = 0; i < n; i++) {
            a[i] = d.get(a[i]);
        }
        
        int[] b = new int[n + 1];
        for (int i = 0; i < n; i++) {
            b[i + 1] = b[i] + (a[i] >= X ? 2 : -1);
        }
        
        int c = Integer.MAX_VALUE;
        for (int i = 0; i <= n; i++) {
            c = Math.min(c, b[i]);
        }
        
        for (int i = 0; i <= n; i++) {
            b[i] -= c;
        }
        
        BIT bit = new BIT(Collections.max(Arrays.asList(b)) + 2);
        
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            ans += bit.bitsum(b[i] + 1);
            bit.bitadd(b[i], 1);
        }
        
        if (ans >= m) {
            System.out.println(_a.get(1));
        } else {
            System.out.println(_a.get(0));
        }
    }
}