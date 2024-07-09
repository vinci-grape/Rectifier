import java.util.*;
public class s107598592 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] x = new int[n];
        int[] y = new int[n];
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
            y[i] = x[i];
        }
        Arrays.sort(y);
        int y1 = y[n / 2];
        for (int i = 0; i < n; i++) {
            if (x[i] < y1) {
                System.out.println(y1);
            } else {
                System.out.println(y1 - 1);
            }
            System.out.println();
        }
    }
}