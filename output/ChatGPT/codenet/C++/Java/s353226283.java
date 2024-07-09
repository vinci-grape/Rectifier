import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class s353226283 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        ArrayList<Integer> vec = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int t = sc.nextInt();
            vec.add(t);
        }
        Collections.sort(vec);
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i + k - 1 < n; i++) {
            int diff = vec.get(i + k - 1) - vec.get(i);
            if (diff < ans) {
                ans = diff;
            }
        }
        System.out.println(ans);
    }
}