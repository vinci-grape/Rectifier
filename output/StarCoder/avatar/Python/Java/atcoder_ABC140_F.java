import java.util.*;
public class atcoder_ABC140_F {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int[] cur = new int[n];
        cur[0] = arr[0];
        for (int i = 1; i < n; i++) {
            int j = 0;
            int jM = cur.length;
            for (int k = 0; k < n; k++) {
                if (arr[k] < cur[j]) {
                    cur[j] = arr[k];
                    j++;
                    if (j == jM) {
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i]!= cur[i]) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}

