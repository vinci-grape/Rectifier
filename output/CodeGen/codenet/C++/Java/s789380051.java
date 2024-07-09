public class s789380051 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int ans = 1;
        ans = (ans - comb_s(n, a)) % 1000000007;
        while (ans < 0) {
            ans += 1000000007;
        }
        ans = (ans - comb_s(n, b)) % 1000000007;
        while (ans < 0) {
            ans += 1000000007;
        }
        System.out.println(ans);
    }
}