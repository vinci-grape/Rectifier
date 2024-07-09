import java.util.Scanner;

public class codeforces_519_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];

        String[] aValues = scanner.nextLine().split(" ");
        for (int i = 0; i < n; i++) {
            a[i] = Integer.parseInt(aValues[i]);
        }

        String[] bValues = scanner.nextLine().split(" ");
        for (int i = 0; i < n; i++) {
            b[i] = Integer.parseInt(bValues[i]);
        }

        String[] cValues = scanner.nextLine().split(" ");
        for (int i = 0; i < n; i++) {
            c[i] = Integer.parseInt(cValues[i]);
        }

        int x = 0;
        int y = 0;
        int z = 0;
        for (int i : a) {
            x += i;
        }
        for (int i : b) {
            y += i;
        }
        for (int i : c) {
            z += i;
        }

        System.out.println(Math.abs(x - y));
        System.out.println(Math.abs(y - z));
    }
}