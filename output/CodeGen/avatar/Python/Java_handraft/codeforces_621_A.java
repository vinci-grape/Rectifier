import java.util.*;

public class codeforces_621_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt (scanner.nextLine());
        String[] input = scanner.nextLine().split(" ");
        System.out.println(findMaxForm(input, n));
    }
    public static long findMaxForm(String[] strs, int n) {
        Long[] lst = new Long[n];
        for (int i = 0; i < n; i++) {
            lst[i] = Long.parseLong(strs[i]);
        }
        Arrays.sort(lst);
        Arrays.sort(lst, Collections.reverseOrder());
        long sum = 0;
        boolean ok = false;
        int od = 0;
        for (long i : lst) {
            if (i % 2 != 0) {
                od += 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (lst[i] % 2 == 0) {
                sum += lst[i];
            } else {
                if (ok || od > 1) {
                    sum += lst[i];
                    od--;
                    ok =!ok;
                }
            }
        }
        return sum;
    }
}