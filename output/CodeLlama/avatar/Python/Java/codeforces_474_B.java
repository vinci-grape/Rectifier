import java.util.Scanner;

public class codeforces_474_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int r = 1;
        for (int i = 0; i < n; i++) {
            int k = sc.nextInt();
            for (int j = 0; j < k; j++) {
                arr[i] = r;
                i++;
            }
            r++;
        }
        int m = sc.nextInt();
        for (int i = 0; i < m; i++) {
            int j = sc.nextInt();
            System.out.println(arr[j - 1]);
        }
    }
}