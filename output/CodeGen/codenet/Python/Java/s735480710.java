public class s735480710 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] a = in.nextLine().split(" ");
        String[] b = new String[n];
        for (int i = 0; i < n; i++) {
            b[i] = a[i];
        }
        b = a[1::2][::-1]+a[::2];
        if (n % 2 == 0) {
            for (int i = 0; i < n; i++) {
                System.out.print(b[i] + " ");
            }
        } else {
            for (int i = 0; i < n; i++) {
                System.out.print(b[i] + " ");
            }
        }
    }
}