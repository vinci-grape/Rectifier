import java.util.*;

public class s315467749 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] S = new int[n];
        for (int i = 0; i < n; i++) {
            S[i] = sc.nextInt();
        }
        int q = sc.nextInt();
        int[] T = new int[q];
        for (int i = 0; i < q; i++) {
            T[i] = sc.nextInt();
        }
        int ans = 0;
        for (int i = 0; i < q; i++) {
            if (T[i] == S[0] || T[i] == S[n - 1]) {
                ans++;
            } else {
                int left = 0;
                int right = n - 1;
                while (right - left > 1) {
                    int mid = (left + right) / 2;
                    if (S[mid] == T[i]) {
                        ans++;
                        break;
                    } else if (S[mid] < T[i]) {
                        left = mid;
                    } else {
                        right = mid;
                    }
                }
            }
        }
        System.out.println(ans);
    }
}