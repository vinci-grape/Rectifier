import java.util.Arrays;
import java.util.Scanner;

public class s763097776 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = scanner.nextInt();
        }

        int[] pCopy = Arrays.copyOf(p, n);

        Arrays.sort(p);

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] != pCopy[i]) {
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