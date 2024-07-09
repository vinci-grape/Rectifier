public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int mod = 1000000007;
    int[][] memo = new int[n + 1][4];
    for (int i = 0; i < memo.length; i++) {
        Arrays.fill(memo[i], -1);
    }
    System.out.println(dfs(0, "TTT", memo));
}

public static int dfs(int cur, String last3, int[][] memo) {
    if (memo[cur][last3.charAt(0) - 'A'] != -1) {
        return memo[cur][last3.charAt(0) - 'A'];
    }
    if (cur == n) {
        return 1;
    }
    int ret = 0;
    for (int i = 0; i < 4; i++) {
        if (ok(last3.charAt(1) - 'A', last3.charAt(2) - 'A', last3.charAt(3) - 'A', i)) {
            ret = (ret + dfs(cur + 1, last3.substring(1) + (char)('A' + i), memo)) % mod;
        }
    }
    memo[cur][last3.charAt(0) - 'A'] = ret;
    return ret;
}

public static boolean ok(int a, int b, int c, int d) {
    int[] t = new int[]{a, b, c};
    if (d >= 1) {
        t[d] = t[d - 1];
        t[d - 1] = d;
    }
    for (int i = 0; i < 3; i++) {
        if (t[i] == 0 && t[i + 1] == 1 && t[i + 2] == 2) {
            return false;
        }
    }
    return true;
}