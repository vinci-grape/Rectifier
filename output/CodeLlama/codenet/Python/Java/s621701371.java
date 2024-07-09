import java.util.*;

public class s621701371 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int q = sc.nextInt();
        String[][] qs = new String[q][3];
        boolean n = false;
        String left = "", right = "";
        for (int i = 0; i < q; i++) {
            qs[i] = sc.nextLine().split(" ");
        }
        for (String[] operation : qs) {
            if (operation[0].equals("1")) {
                n = !n;
            }
            if (operation[0].equals("2")) {
                int f = Integer.parseInt(operation[1]);
                if (n) {
                    f = 1 - f;
                }
                if (f == 1) {
                    left = operation[2] + left;
                } else {
                    right = right + operation[2];
                }
            }
        }
        s = left + s + right;
        System.out.println(n ? new StringBuilder(s).reverse().toString() : s);
    }
}