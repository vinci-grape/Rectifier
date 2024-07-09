import java.util.Scanner;

public class s121463387 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            int x = i;
            String s = Integer.toString(x);
            if (x % 3 == 0 || x % 10 == 3) {
                System.out.print(" " + i);
                continue;
            } else {
                int k = s.length();
                while (k > 0) {
                    k = k - 1;
                    int j = (int) Math.pow(10, k);
                    if ((x / j) % 10 == 3) {
                        System.out.print(" " + i);
                        break;
                    }
                }
            }
        }
        System.out.println();
    }
}