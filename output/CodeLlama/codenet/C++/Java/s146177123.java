import java.util.Scanner;

public class s146177123 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (cin.hasNextInt()) {
            int n = cin.nextInt();
            boolean[] st = new boolean[7];
            for (int i = 0; i < n; i++) {
                int t = cin.nextInt();
                char[] ans = new char[8];
                for (int j = 0; j < 7; j++) {
                    ans[j] = st[j] ^ seg[t][j] ? '1' : '0';
                    st[j] = seg[t][j];
                }
                System.out.println(ans);
            }
        }
    }

    static boolean[][] seg = {
            {false, true, true, true, true, true, true},
            {false, false, false, false, true, true, false},
            {true, false, true, true, false, true, true},
            {true, false, false, true, true, true, true},
            {true, true, false, false, true, true, false},

            {true, true, false, true, true, false, true},
            {true, true, true, true, true, false, true},
            {false, true, false, false, true, true, true},
            {true, true, true, true, true, true, true},
            {true, true, false, true, true, true, true}
    };
}