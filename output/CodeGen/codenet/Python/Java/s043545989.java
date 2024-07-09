public class s043545989 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[] b = new int[3];
        for (int i = 0; i < 3; i++) {
            b[i] = in.nextInt();
        }
        int[] c = new int[3];
        for (int i = 0; i < 3; i++) {
            c[i] = in.nextInt();
        }
        if (b[0] == b[1] && b[1] == b[2]) {
            System.out.println("Yes");
        } else if (c[0] == 2 * c[1] || c[1] == 2 * c[0]) {
            System.out.println("Yes");
        } else if (c[0] == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}