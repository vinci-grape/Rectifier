import java.util.Scanner;
import java.util.Arrays;
public class s353226283 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int ans = 1000000001;
        for (int i = 0; i + k - 1 < n; i++) {
            int diff = arr[i + k - 1] - arr[i];
            if (diff < ans) {
                ans = diff;
            }
        }
        System.out.println(ans);
    }
}