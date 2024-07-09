import java.util.Scanner;

public class s058944700 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int ans = 0;
        if (n > k) {
            int tmp = n % k;
            if (tmp >= k - tmp) {
                ans = k - tmp;
            } else {
                ans = tmp;
            }
        } else if (n < k) {
            if (n >= k - n) {
                ans = k - n;
            } else {
                ans = n;
            }
        } else {
            ans = 0;
        }
        System.out.println(ans);
    }
}