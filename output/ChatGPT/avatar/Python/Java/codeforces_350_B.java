import java.util.*;

public class codeforces_350_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] t = new int[n + 1];
        int[] a = new int[n + 1];
        int[] cnt = new int[n + 1];
        List<Integer> ans = new ArrayList<>();

        for (int i = 1; i <= n; i++) {
            t[i] = scanner.nextInt();
        }

        for (int i = 1; i <= n; i++) {
            a[i] = scanner.nextInt();
            cnt[a[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (t[i] == 1) {
                List<Integer> crt = new ArrayList<>();
                crt.add(i);
                int x = a[i];
                while (cnt[x] == 1) {
                    crt.add(x);
                    x = a[x];
                }
                if (crt.size() > ans.size()) {
                    ans = new ArrayList<>(crt);
                }
            }
        }

        Collections.reverse(ans);
        System.out.println(ans.size());
        for (int x : ans) {
            System.out.print(x + " ");
        }
    }
}