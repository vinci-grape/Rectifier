class BIT {
    int[] tree;
    int size;
    int depth;
    public BIT(int n) {
        size = n;
        tree = new int[n + 1];
        depth = (int)Math.ceil(Math.log(n) / Math.log(2));
    }
    public int _bitsum(int i) {
        int ret = 0;
        while (i > 0) {
            ret += tree[i];
            i -= i & -i;
        }
        return ret;
    }
    public int bitsum(int l, int r) {
        if (r == 0) {
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
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = n * (n + 1) / 4;
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int[] d = new int[a.length];
        int[] _a = new int[a.length + 1];
        for (int i = 0; i < a.length; i++) {
            d[i] = Arrays.binarySearch(_a, 0, _a.length, a[i]);
            if (d[i] < 0) {
                d[i] = -d[i] - 1;
                _a[_a.length - 1] = a[i];
            }
        }
        a = d;
        int[] b = new int[n + 1];
        for (int i = 0; i < n; i++) {
            b[i + 1] = b[i] + (a[i] >= n);
        }
        for (int i = 0; i < n; i++) {
            b[i + 1] += b[i];
        }
        int c = Math.min(b);
        b = new int[n + 1];
        for (int i = 0; i < n; i++) {
            b[i + 1] = b[i] + (a[i] >= n) - c;
        }
        BIT bit = new BIT(Math.max(b) + 2);
        int ans = 0;
        for (int x : b) {
            ans += bit.bitsum(x + 1);
            bit.bitadd(x, 1);
        }
        System.out.println(ans >= m? _a[n - 1] : _a[n - 2]);
    }
}

class BIT {
    int[] tree;
    int size;
    int depth;
    public BIT(int n) {
        size = n;
        tree = new int[n + 1];
        depth = (int)Math.ceil(Math.log(n) / Math.log(2));
    }
    public int _bitsum(int i) {
        int ret = 0;
        while (i > 0) {
            ret += tree[i];
            i -= i & -i;
        }
        return ret;
    }
    public int bitsum(int l, int r) {
        if (r == 0) {
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
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = n * (n + 1) / 4;
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int[] d = new int[a.length];
        int[] _a = new int[a.length + 1];
        for (int i = 0; i < a.length; i++) {
            d[i] = Arrays.binarySearch(_a, 0, _a.length, a[i]);
            if (d[i] < 0) {
                d[i] = -d[i] - 1;
                _a[_a.length - 1] = a[i];
            }
        }
        a = d;
        int[] b = new int[n + 1];
        for (int i = 0; i < n; i++) {
            b[i + 1] = b[i] + (a[i] >= n);
        }
        for (int i = 0; i < n; i++) {
            b[i + 1] += b[i];
        }
        int c = Math.min(b);
        b = new int[n + 1];
        for (int i = 0; i < n; i++) {
            b[i + 1] = b[i] + (a[i] >= n) - c;
        }
        BIT bit = new BIT(Math.max(b) + 2);
        int ans = 0;
        for (int x : b) {
            ans += bit.bitsum(x + 1);
            bit.bitadd(x, 1);
        }
        System.out.println(ans >= m? _a[n - 1] : _a[n - 2]);
    }
}

class BIT {
    int[] tree;
    int size;
    int depth;
    public BIT(int n) {
        size = n;
        tree = new int[n + 1];
        depth = (int)Math.ceil(Math.log(n) / Math.log(2));
    }
    public int _bitsum(int i) {
        int ret = 0;
        while (i > 0) {
            ret += tree[i];
            i -= i & -i;
        }
        return ret;
    }
    public int bitsum(int l, int r) {
        if (r == 0) {
            return _bitsum(l);
        } else {
            return _bitsum(r) - _bitsum(l);
        }
    }
    public void bitadd(int i, int x) {
        i += 1;
        while (i <= size) {
            tree
