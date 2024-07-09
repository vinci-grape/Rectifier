import java.util.Scanner;

public class codeforces_369_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int l = sc.nextInt();
        int r = sc.nextInt();
        int sa = sc.nextInt();
        int sk = sc.nextInt();
        int[] ans = new int[n];
        for (int i = 0; i < k; i++) {
            ans[i] = sk / n + 1;
            if (i < sk % n) {
                ans[i]++;
            }
        }
        for (int i = k; i < n; i++) {
            ans[i] = sa / n + 1;
            if (i < sa % n) {
                ans[i]++;
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}