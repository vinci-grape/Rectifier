import java.util.*;
public class atcoder_ABC174_E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int a = 1, b = 1000000000;
        int ans = b;
        while (a <= b) {
            int mid = (a + b) / 2;
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] % mid == 0) {
                    count++;
                }
                count -= arr[i] / mid;
            }
            if (count >= 0) {
                ans = mid;
                b = mid - 1;
            } else {
                a = mid + 1;
            }
        }
        System.out.println(ans);
    }
}