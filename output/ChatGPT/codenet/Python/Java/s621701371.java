import java.util.Scanner;

public class s621701371 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int q = Integer.parseInt(scanner.nextLine());
        String[][] qs = new String[q][3];
        for (int i = 0; i < q; i++) {
            qs[i] = scanner.nextLine().split(" ");
        }
        boolean n = false;
        String left = "";
        String right = "";
        for (String[] operation : qs) {
            if (operation[0].equals("1")) {
                n = !n;
            }
            if (operation[0].equals("2")) {
                int f = Integer.parseInt(operation[1]);
                String c = operation[2];
                if (n) {
                    f = f != 1 ? 1 : 2;
                }
                if (f == 1) {
                    left = c + left;
                } else if (f == 2) {
                    right += c;
                }
            }
        }
        s = left + s + right;
        System.out.println(n ? new StringBuilder(s).reverse().toString() : s);
    }
}