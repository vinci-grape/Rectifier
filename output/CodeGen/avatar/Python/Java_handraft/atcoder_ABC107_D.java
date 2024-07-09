class BIT {
    int size;
    int[] tree;
    int depth;
    public BIT(int size) {
        this.size = size;
        tree = new int[size + 1];
        depth = bit_length(size);
    }
    public int bitsum(int l, int r) {
        if (r == null) {
            return tree[l];
        }
        return tree[r] - tree[l];
    }
    public void bitadd(int i, int x) {
        i += 1;
        while (i <= size) {
            tree[i] += x;
            i += i & -i;
        }
    }
    public static int bit_length(int n) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(int n, int m) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n, long m) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n, int m) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(int n, long m) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(int n, int m, int k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n, long m, long k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(int n, long m, long k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n, int m, long k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(int n, int m, int k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n, int m, int k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(int n, long m, int k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n, int m, long k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(int n, long m, long k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1;
            ret++;
        }
        while (m!= 0) {
            m >>= 1;
            ret++;
        }
        while (k!= 0) {
            k >>= 1;
            ret++;
        }
        return ret;
    }
    public static int bit_length(long n, int m, long k) {
        int ret = 0;
        while (n!= 0) {
            n >>= 1