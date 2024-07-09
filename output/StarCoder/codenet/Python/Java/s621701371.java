import java.util.*;
public class s621701371 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int q = sc.nextInt();
        String[][] qs = new String[q][3];
        for (int i = 0; i < q; i++) {
            qs[i] = sc.next().split(" ");
        }
        boolean n = false;
        String left = "";
        String right = "";
        for (int i = 0; i < q; i++) {
            if (qs[i][0].equals("1")) {
                n =!n;
            }
            if (qs[i][0].equals("2")) {
                int t = Integer.parseInt(qs[i][1]);
                int f = Integer.parseInt(qs[i][2]);
                String c = qs[i][3];
                if (n) {
                    f = 1 == f? 2 : 1;
                }
                if (f == 1) {
                    left = c + left;
                } else {
                    right = c + right;
                }
            }
        }
        System.out.println(left + s + right);
    }
}