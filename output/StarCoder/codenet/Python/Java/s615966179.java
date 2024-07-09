import java.util.*;
public class s615966179 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int ans = n / (a + b) * a;
        int r = Math.min(n % (a + b), a);
        ans += r;
        System.out.println(ans);
    }
}