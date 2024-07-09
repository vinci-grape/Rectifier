;
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