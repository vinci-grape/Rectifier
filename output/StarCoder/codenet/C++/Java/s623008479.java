import java.util.*;
public class s623008479 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            l[i] = sc.nextInt();
        }
        Arrays.sort(l);
        int ans = 0;
        for (int i = 0; i < k; i++) {
            ans += l[n - 1 - i];
        }
        System.out.println(ans);
    }
}