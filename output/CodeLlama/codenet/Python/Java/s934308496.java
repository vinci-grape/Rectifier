import java.util.Scanner;

public class s934308496 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int[] m = new int[n];
        for (int i = 0; i < n; i++) {
            m[i] = sc.nextInt();
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += m[i];
        }
        int max = m[0];
        for (int i = 0; i < n; i++) {
            if (m[i] > max) {
                max = m[i];
            }
        }
        System.out.println(n + (x - sum) / max);
    }
}