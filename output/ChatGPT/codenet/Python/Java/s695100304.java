import java.util.Scanner;

public class s695100304 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] x = new int[n];
        for (int i = 0; i < n; i++) {
            x[i] = input.nextInt();
        }
        for (int i = n - 1; i >= 0; i--) {
            System.out.print(x[i] + " ");
        }
        input.close();
    }
}