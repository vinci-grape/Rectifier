import java.util.*;
public class atcoder_ABC134_E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        for (int i = 0; i < N; i++) {
            int A = sc.nextInt();
            int idx = binary_search(ans, A);
            if (idx == ans.size()) {
                ans.add(new ArrayList<Integer>());
            }
            ans.get(idx).add(A);
        }
        System.out.println(ans.size());
    }
    public static int binary_search(List<List<Integer>> ans, int key) {
        int bad = -1, good = ans.size();
        while (good - bad > 1) {
            int mid = (bad + good) / 2;
            if (ans.get(mid).get(ans.get(mid).size() - 1) < key) {
                good = mid;
            } else {
                bad = mid;
            }
        }
        return good;
    }
}

