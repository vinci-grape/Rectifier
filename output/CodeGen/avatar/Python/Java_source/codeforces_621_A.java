public class codeforces_621_A {
    public int findMaxForm(String[] strs, int m, int n) {
        int[] lst = new int[n];
        for (int i = 0; i < n; i++) {
            lst[i] = Integer.parseInt(strs[i]);
        }
        Arrays.sort(lst);
        Arrays.sort(lst, Collections.reverseOrder());
        int sum = 0;
        int ok = 0;
        int od = 0;
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