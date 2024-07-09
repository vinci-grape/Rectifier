import java.util.Scanner;

public class s893778513 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int max = arr[0];
        int sum = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            sum += arr[i];
        }

        if (max < sum - max) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}