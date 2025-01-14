class atcoder_ABC104_C {
    static final int INF = 100000;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int D = sc.nextInt();
        long G = sc.nextLong();
        int[] p = new int[D];
        int[] c = new int[D];
        for (int i = 0; i < D; i++) {
            p[i] = sc.nextInt();
            c[i] = sc.nextInt();
        }
        int min = INF;
        for (int bit = 0; bit < (1 << D); bit++) {
            int score = 0;
            int solve_num = 0;
            for (int i = 0; i < D; i++) {
                if ((bit & (1 << i))!= 0) {
                    score += 100 * (i + 1) * p[i] + c[i];
                    solve_num += p[i];
                }
            }
            if (score < G) {
                loop:
                for (int i = D - 1; i >= 0; i--) {
                    if ((bit & (1 << i)) == 0) {
                        for (int j = 0; j < p[i] - 1; j++) {
                            score += 100 * (i + 1);
                            solve_num++;
                            if (score >= G) {
                                break loop;
                            }
                        }
                    }
                }
            }
            if (score >= G) {
                min = Math.min(min, solve_num);
            }
        }
        System.out.println(min);
        sc.close();
    }
}