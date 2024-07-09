import java.util.*;

public class codeforces_400_A {
    public static boolean help(int a, int b, int[] l) {
        List<int[]> tot = new ArrayList<>();
        for (int i = 0; i < b; i++) {
            tot.add(Arrays.copyOfRange(l, i * a, i * a + a));
        }
        for (int i = 0; i < tot.get(0).length; i++) {
            int sum = 0;
            for (int[] arr : tot) {
                sum += arr[i];
            }
            if (sum == b)
                return true;
        }
        return false;
    }

    public static void solve() {
        List<int[]> tot = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        String x = scanner.nextLine();
        int[] s = new int[x.length()];
        for (int i = 0; i < x.length(); i++) {
            if (x.charAt(i) == 'O')
                s[i] = 0;
            else
                s[i] = 1;
        }
        for (int i = 1; i <= 13; i++) {
            if (12 % i == 0) {
                if (help(i, 12 / i, s))
                    tot.add(new int[] {12 / i, i});
            }
        }
        System.out.print(tot.size() + " ");
        tot.sort((a, b) -> a[0] - b[0]);
        for (int[] arr : tot) {
            System.out.print(arr[0] + "x" + arr[1] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();
        for (int i = 0; i < t; i++) {
            solve();
        }
    }
}