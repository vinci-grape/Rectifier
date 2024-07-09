import java.util.Scanner;

public class s028542090 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int k = scanner.nextInt();
        long[] a = new long[k];

        for (int i = 0; i < k; i++) {
            a[i] = scanner.nextLong();
        }

        long max = 3, min = 2;

        if (a[k - 1] != 2) {
            System.out.println(-1);
            return;
        }

        for (int i = k - 2; i >= 0; i--) {
            if (a[i] > max) {
                System.out.println(-1);
                return;
            } else {
                max = ((max / a[i]) + 1) * a[i] - 1;
                if (min % a[i] != 0) {
                    min = ((min / a[i]) + 1) * a[i];
                }
            }

            if (max <= min) {
                System.out.println(-1);
                return;
            }
        }

        System.out.println(min + " " + max);
    }
}