import java.util.Scanner;

public class atcoder_AGC033_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int H = sc.nextInt();
        int W = sc.nextInt();
        int N = sc.nextInt();
        int s_r = sc.nextInt();
        int s_c = sc.nextInt();
        String S = sc.next();
        String T = sc.next();
        boolean Judge = false;
        int S_L = 0, S_R = 0, S_U = 0, S_D = 0;
        int T_L = 0, T_R = 0, T_U = 0, T_D = 0;
        for (int x = 0; x < N; x++) {
            if (S.charAt(x) == 'L') {
                S_L++;
                if (S_L - T_R - s_c == 0) {
                    Judge = true;
                }
            } else if (S.charAt(x) == 'R') {
                S_R++;
                if (s_c + (S_R - T_L) == W + 1) {
                    Judge = true;
                }
            } else if (S.charAt(x) == 'U') {
                S_U++;
                if (S_U - T_D - s_r == 0) {
                    Judge = true;
                }
            } else if (S.charAt(x) == 'D') {
                S_D++;
                if (s_r + (S_D - T_U) == H + 1) {
                    Judge = true;
                }
            }
            if (T.charAt(x) == 'L') {
                if (S_R - T_L + s_c != 1) {
                    T_L++;
                }
            } else if (T.charAt(x) == 'R') {
                if (s_c + (T_R - S_L) != W) {
                    T_R++;
                }
            } else if (T.charAt(x) == 'U') {
                if (S_D - T_U + s_r != 1) {
                    T_U++;
                }
            } else if (T.charAt(x) == 'D') {
                if (s_r + (T_D - S_U) != H) {
                    T_D++;
                }
            }
        }
        if (Judge) {
            System.out.println("NO");
        } else {
            System.out.println("YES");
        }
    }
}