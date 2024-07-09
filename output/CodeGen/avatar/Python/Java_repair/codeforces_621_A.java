import java.util.*;

public class codeforces_621_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = Integer.parseInt(scanner.nextLine());
        int n = Integer.parseInt(scanner.nextLine());
        String[] strs = new String[n];
        for (int i = 0; i < n; i++) {
            strs[i] = scanner.nextLine();
        }
        Arrays.sort(strs, Collections.reverseOrder());
        int sum = 0;
        int ok = 0;
        int od = 0;
        for (int i = 0; i < n; i++) {
            if (strs[i] % 2 == 0) {
                sum += strs[i];
            } else {
                if (ok || od > 1) {
                    sum += strs[i];
                    od--;
                    ok =!ok;
                }
            }
        }
        System.out.println(sum);
    }
}