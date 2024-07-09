import java.util.*;
import java.lang.*;
import java.io.*;
public class codeforces_61_B {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] s = new String[n];
        for (int i = 0; i < n; i++) {
            s[i] = sc.next();
        }
        int q = sc.nextInt();
        for (int i = 0; i < q; i++) {
            String qs = sc.next();
            boolean flag = false;
            for (int j = 0; j < n; j++) {
                if (s[j].equals(qs)) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                System.out.println("ACC");
            } else {
                System.out.println("WA");
            }
        }
    }
}