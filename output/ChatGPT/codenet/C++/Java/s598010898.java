import java.util.Scanner;

public class s598010898 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            b[i] = scanner.nextInt();
            if (a[i] - b[i] > 0) {
                sum += a[i] - b[i];
            }
        }
        
        System.out.println(sum);
    }
}