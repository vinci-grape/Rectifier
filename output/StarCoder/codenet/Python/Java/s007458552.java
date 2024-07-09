import java.util.*;

public class s007458552 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int r = 0;
        int g = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'R') {
                r++;
            } else {
                g++;
            }
        }
        if (r > n - r) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}