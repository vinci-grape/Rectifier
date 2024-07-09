import java.util.*;
public class atcoder_AGC013_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int ans = 0;
        for (int i = 1; i < n - 1; i++) {
            if (a[i - 1] < a[i] && a[i] > a[i + 1] || a[i - 1] > a[i] && a[i] < a[i + 1]) {
                ans++;
                i++;
            }
        }
        System.out.println(ans + 1);
    }
}