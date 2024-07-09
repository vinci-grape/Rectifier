import java.util.Scanner;
import java.util.Arrays;

public class s970063640 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a = input.nextInt();
        int sum = 0;
        int[] s = new int[n];
        for (int i = 0; i < n; i++) {
            s[i] = input.nextInt();
        }
        Arrays.sort(s);
        for (int i = n - 1; i > n - a - 1; i--) {
            sum += s[i];
        }
        System.out.println(sum);
    }
}