import java.util.Scanner;

public class s146177123 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, t;
        boolean[] st = new boolean[7];
        while (scanner.hasNext()) {
            n = scanner.nextInt();
            if (n == -1) {
                break;
            }
            for (int i = 0; i < 7; i++) {
                st[i] = false;
            }
            for (int i = 0; i < n; i++) {
                t = scanner.nextInt();
                char[] ans = new char[8];
                for (int j = 0; j < 7; j++) {
                    ans[j] = (st[j] ^ seg[t][j]) ? '1' : '0';
                    st[j] = seg[t][j];
                }
                System.out.println(ans);
            }
        }
    }
}