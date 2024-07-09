import java.util.Scanner;
import java.util.List;
import java.util.Arrays;
import java.util.Collections;
import java.util.stream.Collectors;

public class codeforces_624_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        List<Integer> a = Arrays.stream(in.nextLine().split(" "))
               .map(Integer::parseInt)
               .collect(Collectors.toList());
        Collections.sort(a, Collections.reverseOrder());
        int ans = 0;
        int pre = Integer.MAX_VALUE;
        for (int j = 0; j < n; j++) {
            ans += Math.min(pre - 1, Math.min(pre - 1, a.get(j)));
            pre = Math.max(0, Math.min(pre - 1, a.get(j)));
        }
        System.out.println(ans);
    }
}