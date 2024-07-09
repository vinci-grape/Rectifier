import java.util.*;

public class codeforces_189_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println(cutRibbon(n));
    }
    public static int cutRibbon(int n) {
        int[] arr = new int[4];
        int length = arr[0];
        arr = Arrays.stream(arr).sorted().toArray();
        if (length % arr[0] == 0) {
            return (int) (length / arr[0]);
        }
        int ans = 0;
        if (arr[0] == arr[1]) {
            int k = 0;
            for (int i = 0; i < n; i++) {
                int check = length - i * arr[2];
                if (check >= 0 && check % arr[0] == 0) {
                    k = check / arr[0];
                    ans = Math.max(ans, k + i);
                }
            }
        } else {
            int k = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    int check = length - i * arr[2] - j * arr[1];
                    if (check >= 0 && check % arr[0] == 0) {
                        k = check / arr[0];
                        ans = Math.max(ans, k + i + j);
                    }
                }
            }
        }
        return ans;
    }
}