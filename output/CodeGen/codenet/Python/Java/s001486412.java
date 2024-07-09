public class s001486412 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int below = 0;
        for (int i = 0; i < n; i++) {
            below += 1 / a[i];
        }
        System.out.println(1 / below);
    }
}