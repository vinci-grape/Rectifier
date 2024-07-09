import java.util.*;
public class s469969316 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (true) {
            String input = cin.next();
            if (input.equals(".")) break;
            int[] a = new int[3];
            int cnt = 0;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 3; k++) {
                        a[0] = i; a[1] = j; a[2] = k;
                        String ss = input;
                        for (int p = 0; p < ss.length(); p++) {
                            char c = ss.charAt(p);
                            if (c == 'P') c = (char)('0' + a[0]);
                            if (c == 'Q') c = (char)('0' + a[1]);
                            if (c == 'R') c = (char)('0' + a[2]);
                            ss = ss.substring(0, p) + c + ss.substring(p+1);
                        }
                        if (parse(ss) == 2) cnt++;
                    }
                }
            }
            System.out.println(cnt);
        }
    }
    static int parse(String ss) {
        int it = 0;
        char c = ss.charAt(it++);
        if (c >= '0' && c <= '2') return c-'0';
        if (c == '-') return Not(parse(ss));
        int x = parse(ss);
        c = ss.charAt(it++);
        int y = parse(ss);
        ++it;
        return c == '*'? And(x, y) : Or(x, y);
    }
    static int Not(int x) {
        return 2-x;
    }
    static int And(int x, int y) {
        if (x*y == 0) return 0;
        if (x == 2 && y == 2) return 2;
        return 1;
    }
    static int Or(int x, int y) {
        if (x == 2 || y == 2) return 2;
        if (x == 1 || y == 1) return 1;
        return 0;
    }
}