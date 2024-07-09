public class s951065247 {
    static int N, A, B, C;
    static int[] l;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        A = scanner.nextInt();
        B = scanner.nextInt();
        C = scanner.nextInt();
        
        l = new int[N];
        for (int i = 0; i < N; i++) {
            l[i] = scanner.nextInt();
        }
        
        System.out.println(dfs(0, 0, 0, 0));
    }
    
    public static int dfs(int cur, int a, int b, int c) {
        if (cur == N) {
            return Math.abs(A - a) + Math.abs(B - b) + Math.abs(C - c) - 30;
        }
        
        int no_add = dfs(cur + 1, a, b, c);
        int add_a = dfs(cur + 1, a + l[cur], b, c) + 10;
        int add_b = dfs(cur + 1, a, b + l[cur], c) + 10;
        int add_c = dfs(cur + 1, a, b, c + l[cur]) + 10;

        return Math.min(no_add, Math.min(add_a, Math.min(add_b, add_c)));
    }
}