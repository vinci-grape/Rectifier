import java.util.*;

public class s735480710 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] a = sc.nextLine().split(" ");
        String[] b = new String[n];
        if (n % 2 == 0) {
            for (int i = 1; i < n; i += 2) {
                b[i - 1] = a[i];
            }
            for (int i = 0; i < n; i += 2) {
                b[i] = a[i];
            }
        } else {
            for (int i = 1; i < n; i += 2) {
                b[i - 1] = a[i];
            }
            for (int i = 0; i < n; i += 2) {
                b[i] = a[i];
            }
            String[] temp = new String[n];
            for (int i = 0; i < n; i++) {
                temp[i] = b[n - 1 - i];
            }
            b = temp;
        }
        for (int i = 0; i < n; i++) {
            System.out.print(b[i] + " ");
        }
    }
}