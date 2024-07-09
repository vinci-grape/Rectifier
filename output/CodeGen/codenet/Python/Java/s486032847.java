public class s486032847 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int x = in.nextInt();
        int t = in.nextInt();
        int ans = 0;
        if (n < 2) {
            ans = n;
        } else {
            ans = keta(n);
        }
        if (ans % 9 == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
    public static int keta(String s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            sum += (s.charAt(i) - '0');
        }
        return keta(sum);
    }
    public static int keta(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}