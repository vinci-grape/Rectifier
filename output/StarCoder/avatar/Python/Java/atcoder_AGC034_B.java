import java.util.*;
public class atcoder_AGC034_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int total = 0, numA = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'X') {
                numA = 0;
            } else {
                if (s.charAt(i) == 'A') numA++;
                else total += numA;
            }
        }
        System.out.println(total);
    }
}