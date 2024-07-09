import java.util.Scanner;

public class s763097776 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] p = new int[n];
        int[] p_copy = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
            p_copy[i] = p[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] != p_copy[i]) {
                count++;
            }
        }

        if (count == 0 || count == 2) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}