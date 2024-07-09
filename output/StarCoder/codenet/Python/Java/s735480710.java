import java.util.*;
public class s735480710 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] a = new String[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.next();
        }
        String[] b = new String[n];
        int j = 0;
        for (int i = 1; i < n; i += 2) {
            b[j] = a[i];
            j++;
        }
        for (int i = 0; i < n; i += 2) {
            b[j] = a[i];
            j++;
        }
        for (int i = 0; i < n; i++) {
            System.out.print(b[i] + " ");
        }
    }
}