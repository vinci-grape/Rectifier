public class s791749917 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int H = in.nextInt();
        int W = in.nextInt();
        int ans = 0;
        if (H == 1 || W == 1) {
            ans = 1;
        } else {
            int m = H * W;
            if (m % 2 == 0) ans = m / 2;
            else ans = m / 2 + 1;
        }
        System.out.println(ans);
    }
}