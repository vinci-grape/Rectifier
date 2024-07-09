import java.util.*;

public class codeforces_514_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String ip = scanner.nextLine();
        System.out.println(atoi(ip));
    }
    public static long atoi(String str) {
        int i = 0;
        int len = str.length();
        long sign = 1;
        if (len == 0) return 0;
        if (str.charAt(0) == '+') {
            i++;
        } else if (str.charAt(0) == '-') {
            sign = -1;
            i++;
        }
        long num = 0;
        for (; i < len; i++) {
            char c = str.charAt(i);
            if (c >= '0' && c <= '9') {
                num = num * 10 + c - '0';
            } else {
                break;
            }
        }
        return sign * num;
    }
}