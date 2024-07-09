import java.util.Scanner;
public class atcoder_ARC062_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int num_g = 0, num_p = 0, score = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'g') {
                if (num_g - num_p > 0) {
                    score += 1;
                    num_p += 1;
                } else {
                    score = score;
                    num_g += 1;
                }
            } else if (s.charAt(i) == 'p') {
                if (num_g - num_p > 0) {
                    score = score;
                    num_p += 1;
                } else {
                    score -= 1;
                    num_g += 1;
                }
            }
        }
        System.out.println(score);
    }
}
