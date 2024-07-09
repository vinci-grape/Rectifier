import java.util.Scanner;

public class s827462150 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
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
            z = 1;
            x += 1;
        }
        
        for (int i = 0; i < n; i++) {
            System.out.println(A[i]);
        }
    }
}