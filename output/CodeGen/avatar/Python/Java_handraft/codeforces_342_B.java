import java.util.*;

public class codeforces_342_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int s = in.nextInt();
        int f = in.nextInt();
        int d;
        String c;
        if (s < f) {
            d = 1;
            c = "R";
        } else {
            d = -1;
            c = "L";
        }
        String res = "";
        int i = 1;
        int j = s;
        int t = in.nextInt();
        int l = in.nextInt();
        int r = in.nextInt();
        int k = 1;
        while (j!= f) {
            if (i > t && k < m) {
                t = in.nextInt();
                l = in.nextInt();
                r = in.nextInt();
                k++;
            }
            if (i == t && (l <= j && j <= r || l <= j + d && j + d <= r)) {
                res += "X";
            } else {
                res += c;
                j += d;
            }
            i++;
        }
        System.out.println(res);
    }
}