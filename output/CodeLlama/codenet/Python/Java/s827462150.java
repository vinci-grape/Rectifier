import java.util.Scanner;
import java.util.Arrays;

public class s827462150 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] A = new int[n];
        Arrays.fill(A, 0);

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