public class codeforces_30_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int n = sc.nextInt();
        for (int X = -1000; X <= 1000; X++) {
            if (A * Math.pow(X, n) == B) {
                System.out.println(X);
                return;
            }
        }
        System.out.println("No solution");
    }
}