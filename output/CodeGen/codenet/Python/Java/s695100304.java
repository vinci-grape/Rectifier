public class s695100304 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] x = new int[n];
        for (int i = 0; i < n; i++) {
            x[i] = in.nextInt();
        }
        in.close();
        int[] y = new int[n];
        for (int i = 0; i < n; i++) {
            y[i] = x[n - i - 1];
        }
        for (int i = 0; i < n; i++) {
            System.out.print(y[i] + " ");
        }
    }
}