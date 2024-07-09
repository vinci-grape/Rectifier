import java.util.Scanner;

public class codeforces_268_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] q = new String[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            q[i] = sc.next();
        }
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (k == j) {
                    continue;
                } else if (q[j].charAt(0) == q[k].charAt(q[k].length() - 1)) {
                    count++;
                } else {
                    continue;
                }
            }
        }
        System.out.println(count);
    }
}