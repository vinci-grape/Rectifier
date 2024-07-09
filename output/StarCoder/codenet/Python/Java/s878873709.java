import java.util.Scanner;

public class s878873709 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] s = new int[]{1, 2, 4, 8, 16, 32, 64};
        int ans = 0;
        for (int i = 1; i <= N; i++) {
            if (i == s[i - 1]) {
                ans = i;
            }
        }
        System.out.println(ans);
    }
}