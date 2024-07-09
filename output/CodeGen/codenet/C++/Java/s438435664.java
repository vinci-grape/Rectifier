public class s438435664 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();
        int k = cin.nextInt();
        int sum = 0;
        for (int b = 1; b <= n; b++) {
            int cnt = (n + 1) / b;
            int md = (n + 1) % b;
            sum += cnt * max((b - k), 0) + max((md - k), 0);
            if (k == 0) sum--;
        }
        System.out.println(sum);
    }
}