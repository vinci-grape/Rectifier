import java.util.*;
public class s353226283 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] vec = new int[n];
        for (int i = 0; i < n; i++) {
            vec[i] = sc.nextInt();
        }
        Arrays.sort(vec);
        int ans = 1000000001;
        for (int i = 0; i + k - 1 < n; i++) {
            int diff = vec[i + k - 1] - vec[i];
            if (diff < ans) {
                ans = diff;
            }
        }
        System.out.println(ans);
    }
}