class atcoder_ABC178_B {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null ||!st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    static int modPower(int x, int y, int mod) {
        int res = 1;
        x %= mod;
        if (x == 0) return 0;
        while (y > 0) {
            if (y % 2 == 1) {
                res = (res * x) % mod;
            }
            y >>= 1;
            x = (x * x) % mod;
        }
        return res;
    }

    static class pair<T1, T2> {
        T1 first;
        T2 second;
        pair(T1 first, T2 second) {
            this.first = first;
            this.second = second;
        }
    }

    public static void main(String[] args) throws IOException {
        FastReader in = new FastReader();
        long[] a = new long[4];
        for (int i = 0; i < 4; i++) {
            a[i] = in.nextLong();
        }
        System.out.println(Math.max(a[0] * a[2], Math.max(a[1] * a[3], Math.max(a[0] * a[3], a[1] * a[2]))));
    }
}