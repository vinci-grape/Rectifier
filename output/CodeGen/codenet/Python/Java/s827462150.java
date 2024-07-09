import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;

public class s827462150 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] A = new int[n];
        int x = 1, y = 1, z = 1;
        while (x * x + y * y + z * z + x * y + y * z + z * x <= n) {
            while (x * x + y * y + z * z + x * y + y * z + z * x <= n) {
                while (x * x + y * y + z * z + x * y + y * z + z * x <= n) {
                    int i = x * x + y * y + z * z + x * y + y * z + z * x;
                    A[i - 1] += 1;
                    z += 1;
                }
                z = 1;
                y += 1;
            }
            y = 1;
            x += 1;
        }
        for (int i = 0; i < n; i++) {
            System.out.println(A[i]);
        }
    }
}