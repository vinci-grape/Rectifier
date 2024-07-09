import java.util.Scanner;

public class s509329039 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] s = new int[m];
        int[] c = new int[m];
        for (int i = 0; i < m; i++) {
            s[i] = sc.nextInt();
            c[i] = sc.nextInt();
            s[i]--;
        }
        for (int i = 0; i < 1000; i++) {
            String st = Integer.toString(i);
            if (st.length() != n) {
                continue;
            }
            // System.out.println(st);
            boolean f = true;
            for (int j = 0; j < m; j++) {
                if (st.charAt(s[j]) == (char) (c[j] + '0')) {

                } else {
                    f = false;
                }
            }
            if (f) {
                System.out.println(i);
                return;
            }

        }
        System.out.println(-1);
    }
}