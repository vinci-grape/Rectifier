import java.util.Scanner;
import java.util.Arrays;

public class s087080706 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int x = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        int ans = 0;
        int i = Arrays.binarySearch(a, x);
        System.out.println(Math.min(i, n - i - 1));
    }
}