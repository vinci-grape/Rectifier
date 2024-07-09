public class s121463387 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 1; i <= n; i++) {
            int x = i;
            String s = Integer.toString(x);
            if (x % 3 == 0 || x % 10 == 3) {
                System.out.print(" " + i);
                continue;
            }
            int k = s.length();
            while (k > 0) {
                k = k - 1;
                int j = Math.pow(10, k);
                if ((x / j) % 10 == 3) {
                    System.out.print(" " + i);
                    break;
                }
            }
        }
        System.out.println();
    }
}