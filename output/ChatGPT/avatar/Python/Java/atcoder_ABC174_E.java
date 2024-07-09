import java.util.Scanner;

public class atcoder_ABC174_E {
    public static boolean check(int[] arr, int k, int mid) {
        for (int i : arr) {
            if (i % mid == 0) {
                k += 1;
            }
            k -= (i / mid);
        }
        return k >= 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        int a = 1;
        int b = Integer.MIN_VALUE;
        for (int i : arr) {
            b = Math.max(b, i);
        }
        int ans = b;
        while (a <= b) {
            int mid = (a + b) / 2;
            if (check(arr, k, mid)) {
                ans = mid;
                b = mid - 1;
            } else {
                a = mid + 1;
            }
        }
        System.out.println(ans);
    }
}