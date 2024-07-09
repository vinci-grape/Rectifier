import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class atcoder_ABC167_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int x = scanner.nextInt();
        int[][] c = new int[n][m];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                c[i][j] = scanner.nextInt();
            }
        }
        
        List<List<Integer>> l = new ArrayList<>();
        List<Integer> rem = new ArrayList<>();
        int ans = 0;
        
        for (int i = 1; i <= n; i++) {
            combinations(l, new ArrayList<>(), 0, n, i);
        }
        
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < l.size(); j++) {
                int ca = 0;
                for (int ii : l.get(j)) {
                    ca += c[ii][i];
                }
                if (ca < x) {
                    rem.add(0, j);
                } else {
                    // do nothing
                }
            }
            
            if (rem.size() > 0) {
                for (int j : rem) {
                    l.remove(j);
                }
                rem = new ArrayList<>();
            }
            
            if (l.size() == 0) {
                System.out.println(-1);
                break;
            }
        }
        
        if (l.size() > 0) {
            for (List<Integer> i : l) {
                int ca = 0;
                for (int j : i) {
                    ca += c[j][0];
                }
                if (ans == 0) {
                    ans = ca;
                } else {
                    ans = Math.min(ans, ca);
                }
            }
            System.out.println(ans);
        }
    }
    
    public static void combinations(List<List<Integer>> result, List<Integer> tempList, int start, int n, int k) {
        if (k == 0) {
            result.add(new ArrayList<>(tempList));
        } else {
            for (int i = start; i < n; i++) {
                tempList.add(i);
                combinations(result, tempList, i + 1, n, k - 1);
                tempList.remove(tempList.size() - 1);
            }
        }
    }
}