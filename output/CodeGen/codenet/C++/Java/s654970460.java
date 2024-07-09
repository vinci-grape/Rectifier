public class s654970460 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int n1 = n - 1;
        for (int i = 0; i < n1; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println(a[n1]);
        for (int i = 1; i < n; i++) {
            System.out.print(a[n1 - i] + " ");
        }
        System.out.println();
    }
}