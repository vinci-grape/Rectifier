import java.util.Scanner;

public class s878873709 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] s = {1, 2, 4, 8, 16, 32, 64};
        int ans = 0;

        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < s.length; j++) {
                if (i == s[j]) {
                    ans = i;
                }
            }
        }

        System.out.println(ans);
    }
}