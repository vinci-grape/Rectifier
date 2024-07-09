import java.util.Scanner;

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
        for (int i : T) {
            if (i == S[n - 1] || i == S[0]) {
                ans++;
            } else {
                int left = 0;
                int right = n - 1;
                while (right - left > 1) {
                    int mid = (left + right) / 2;
                    if (S[mid] == i) {
                        ans++;
                        break;
                    } else if (S[mid] < i) {
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