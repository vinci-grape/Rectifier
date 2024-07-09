class atcoder_AGC014_D {
    
    def maxMatching(self, v, p):
        a = 0
        o = 0
        for w in self.g[v]:
            if w == p:
                continue
            r = self.maxMatching(w, v)
            a += r / 2
            o += r % 2
        return 2 * a + min(1, o) + 1
    
    def main(self):
        sc = MyScanner()
        n = sc.nextInt()
        self.g = [ [ ] for _ in range(n) ]
        for i in range(n - 1):
            a = sc.nextInt() - 1
            b = sc.nextInt() - 1
            self.g[a].append(b)
            self.g[b].append(a)
        m = self.maxMatching(0, -1) / 2
        print(2 * m == n and "Second" or "First")
        
    def maxMatching(self, v, p):
        a = 0
        o = 0
        for w in self.g[v]:
            if w == p:
                continue
            r = self.maxMatching(w, v)
            a += r / 2
            o += r % 2
        return 2 * a + min(1, o) + 1
    
    def main(self):
        sc = MyScanner()
        n = sc.nextInt()
        self.g = [ [ ] for _ in range(n) ]
        for i in range(n - 1):
            a = sc.nextInt() - 1
            b = sc.nextInt() - 1
            self.g[a].append(b)
            self.g[b].append(a)
        m = self.maxMatching(0, -1) / 2
        print(2 * m == n and "Second" or "First")
    
    class MyScanner {
        BufferedReader br;
        StringTokenizer st;
        
        public MyScanner() {
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
}