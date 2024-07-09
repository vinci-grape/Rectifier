import java.util.*;
public class s759499751 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        String[] a = new String[n];
        int[] c = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.next();
        }
        c[0] = 0;
        for (int i = 1; i < n; i++) {
            if (a[i].equals("C") && a[i - 1].equals("A")) {
                c[i] = c[i - 1] + 1;
            } else {
                c[i] = c[i - 1];
            }
        }
        for (int w = 0; w < k; w++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            System.out.println(c[r - 1] - c[l - 1]);
        }
    }
}