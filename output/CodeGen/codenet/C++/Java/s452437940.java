public class s452437940 {
    public static void main(String[] args) {
        long long int a, b, x;
        Scanner sc = new Scanner(System.in);
        a = sc.nextLong();
        b = sc.nextLong();
        x = sc.nextLong();
        long long int s = (b / x - a / x);
        if (a % x == 0) {
            s++;
        }
        System.out.println(s);
    }
}