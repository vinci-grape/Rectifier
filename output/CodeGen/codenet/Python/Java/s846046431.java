public class s846046431 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] A = new int[m];
        for (int A_i = 0; A_i < m; A_i++) {
            A[A_i] = in.nextInt();
        }
        A = Arrays.stream(A).sorted().toArray();
        int sum = Arrays.stream(A).sum();
        for (int a : A) {
            if (a / sum - 1 / (4 * m) < 0) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}