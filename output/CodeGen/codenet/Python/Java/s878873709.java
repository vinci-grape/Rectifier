public class s878873709 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[6];
        s[0] = 1;
        s[1] = 2;
        s[2] = 4;
        s[3] = 8;
        s[4] = 16;
        s[5] = 32;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (i in s) {
                ans = i;
            }
        }
        System.out.println(ans);
    }
}