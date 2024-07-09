import java.util.Scanner;
public class s598010898 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[100];
        int[] b = new int[100];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
            if (a[i] - b[i] > 0) {
                sum += a[i] - b[i];
            }
        }
        System.out.println(sum);
    }
}