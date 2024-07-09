public class s860472409 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        in.close();
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                count++;
                if (count % 2!= 0) {
                    ans++;
                }
            } else {
                count = 0;
            }
        }
        System.out.println(ans);
    }
}