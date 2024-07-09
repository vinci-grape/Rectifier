import java.util.*;
public class codeforces_500_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int t = sc.nextInt();
        int[] s = new int[n];
        for (int i = 0; i < n; i++) {
            s[i] = sc.nextInt();
        }
        int current_cell = 0;
        while (current_cell <= t) {
            current_cell += s[current_cell - 1];
            if (current_cell == t) {
                System.out.println("YES");
                return;
            }
        }
        System.out.println("NO");
    }
}