import java.util.*;
public class codeforces_621_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] lst = new int[n];
        for (int i = 0; i < n; i++) {
            lst[i] = sc.nextInt();
        }
        Arrays.sort(lst);
        Arrays.sort(lst, Collections.reverseOrder());
        int od = 0;
        for (int i = 0; i < n; i++) {
            if ((lst[i] & 1) == 1) {
                od++;
            }
        }
        int sum = 0;
        boolean ok = false;
        for (int i = 0; i < n; i++) {
            if ((lst[i] & 1) == 0) {
                if (ok || od > 1) {
                    sum += lst[i];
                    od--;
                    ok =!ok;
                }
            } else {
                sum += lst[i];
            }
        }
        System.out.println(sum);
    }
}