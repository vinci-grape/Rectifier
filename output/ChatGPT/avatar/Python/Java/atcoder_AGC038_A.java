public class atcoder_AGC038_A {
    public static void solve(int H, int W, int A, int B) {
        char[][] answer = new char[H][W];
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (i < B) {
                    if (j < A) {
                        answer[i][j] = '0';
                    } else {
                        answer[i][j] = '1';
                    }
                } else {
                    if (j < A) {
                        answer[i][j] = '1';
                    } else {
                        answer[i][j] = '0';
                    }
                }
            }
        }
        for (int i = 0; i < H; i++) {
            System.out.println(new String(answer[i]));
        }
    }

    public static void main(String[] args) {
        solve(3, 4, 2, 1);
    }
}