public class codeforces_287_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] t = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                t[i][j] = in.nextInt();
            }
        }
        int black = 0;
        int white = 0;
        int correct = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                if (t[i][j] == '#') {
                    black++;
                } else {
                    white++;
                }
                if (t[i][j + 1] == '#') {
                    black++;
                } else {
                    white++;
                }
                if (t[i + 1][j] == '#') {
                    black++;
                } else {
                    white++;
                }
                if (t[i + 1][j + 1] == '#') {
                    black++;
                } else {
                    white++;
                }
                if (black == 0 || black == 3 || white == 0 || white == 3 || white == 4 || black == 4) {
                    correct = 1;
                    break;
                }
                black = 0;
                white = 0;
            }
            if (correct == 1) {
                break;
            }
        }
        if (correct == 1) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}