public class atcoder_ABC136_B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = Integer.parseInt(input.nextLine());
        int i = 1;
        int ans = 0;
        while (Math.pow(10, i) <= N) {
            ans += (Math.pow(10, i) - Math.pow(10, i - 1));
            i += 2;
        }
        ans += Math.max(0, N - Math.pow(10, i - 1) + 1);
        System.out.println(ans);
    }
}