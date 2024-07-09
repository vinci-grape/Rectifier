import java.util.*;

public class s590045523 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int ans = 0;
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    int a = arr[i];
                    int b = arr[j];
                    int c = arr[k];
                    if (a == b || b == c || c == a) {
                        continue;
                    }
                    if (a + b > c && b + c > a && c + a > b) {
                        ans++;
                    }
                }
            }
        }
        System.out.println(ans);
    }
}