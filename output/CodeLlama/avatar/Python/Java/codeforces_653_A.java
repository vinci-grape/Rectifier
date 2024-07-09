import java.util.Scanner;
import java.util.Arrays;
public class codeforces_653_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for (int i = 0; i < n; i++) {
            if (arr[i] + 1 < arr[n - 1] && arr[i] + 2 < arr[n - 1]) {
                System.out.println("YES");
                break;
            }
        }
        if (i == n) {
            System.out.println("NO");
        }
    }
}