import java.util.Scanner;

public class s023282516 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();

        // 後ろから解くかわりにすべての文字列を「左右反転」する
        S = new StringBuilder(S).reverse().toString();
        String[] divide = {"dream", "dreamer", "erase", "eraser"};
        for (int i = 0; i < divide.length; ++i) divide[i] = new StringBuilder(divide[i]).reverse().toString();

        // 端から切っていく
        boolean can = true;
        for (int i = 0; i < S.length();) {
            boolean can2 = false; // 4 個の文字列たちどれかで divide できるか
            for (int j = 0; j < divide.length; ++j) {
                String d = divide[j];
                if (S.substring(i, i + d.length()).equals(d)) { // d で divide できるか
                    can2 = true;
                    i += d.length(); // divide できたら i を進める
                }
            }
            if (!can2) { // divide できなかったら
                can = false;
                break;
            }
        }

        if (can) System.out.println("YES");
        else System.out.println("NO");
    }
}