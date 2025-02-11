import java.util.*;

public class codeforces_514_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        int i = 0;
        int len = str.length();
        int sign = 1;
        if (len == 0) return;
        if (str.charAt(0) == '+') {
            i++;
        } else if (str.charAt(0) == '-') {
            sign = -1;
            i++;
        }
        int num = 0;
        for (; i < len; i++) {
            char c = str.charAt(i);
            if (c >= '0' && c <= '9') {
                num = num * 10 + c - '0';
            } else {
                break;
            }
        }
        System.out.println(sign * num);
    }
}