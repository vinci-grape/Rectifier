import java.util.*;
public class codeforces_609_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        HashMap<Integer, Integer> l = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (l.containsKey(arr[i])) {
                l.put(arr[i], l.get(arr[i]) + 1);
            } else {
                l.put(arr[i], 1);
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (l.get(arr[i]) > 1) {
                res += n - i - l.get(arr[i]);
                l.put(arr[i], l.get(arr[i]) - 1);
            } else {
                res += n - i - 1;
            }
        }
        System.out.println(res);
    }
}