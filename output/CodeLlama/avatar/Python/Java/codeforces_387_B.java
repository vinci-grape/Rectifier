import java.util.Scanner;
public class codeforces_387_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] round_complexity = new int[n];
        int[] george_complexity = new int[m];
        for (int i = 0; i < n; i++) {
            round_complexity[i] = sc.nextInt();
        }
        for (int i = 0; i < m; i++) {
            george_complexity[i] = sc.nextInt();
        }
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (round_complexity[i] <= george_complexity[j]) {
                i++;
            }
            j++;
        }
        System.out.println(n - i);
    }
}