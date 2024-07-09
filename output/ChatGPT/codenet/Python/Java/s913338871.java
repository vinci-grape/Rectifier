import java.util.Arrays;
import java.util.Scanner;

public class s913338871 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] a = new int[N];
        for (int i = 0; i < N; i++) {
            a[i] = scanner.nextInt();
        }
        
        Arrays.sort(a);
        
        int[] s = new int[N/2];
        for (int i = N; i < a.length; i += 2) {
            s[i/2] = a[i];
        }
        
        int sum = 0;
        for (int num : s) {
            sum += num;
        }
        
        System.out.println(sum);
    }
}