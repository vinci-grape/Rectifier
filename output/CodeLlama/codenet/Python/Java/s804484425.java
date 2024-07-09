import java.util.*;

public class s804484425 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[][] info = new int[n][2];
        for (int i = 0; i < n; i++) {
            info[i][0] = sc.nextInt();
            info[i][1] = sc.nextInt();
        }
        Arrays.sort(info, new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2) {
                return o2[1] - o1[1];
            }
        });
        int[] selected = new int[k];
        int[] selected_only = new int[k];
        int[] selected_chohuku = new int[k];
        int[] unselected_only = new int[n - k];
        int[] memo = new int[n];
        for (int i = 0; i < k; i++) {
            if (memo[info[i][0]] == 0) {
                memo[info[i][0]] = 1;
                selected_only[i] = info[i][1];
            } else {
                selected_chohuku[i] = info[i][1];
            }
        }
        int cnt_type = 0;
        for (int i = 0; i < n; i++) {
            if (memo[info[i][0]] == 0) {
                cnt_type++;
            }
        }
        int sum_select = 0;
        for (int i = 0; i < k; i++) {
            sum_select += selected_chohuku[i];
        }
        for (int i = 0; i < k; i++) {
            sum_select += selected_only[i];
        }
        int ans = cnt_type * cnt_type + sum_select;
        for (int i = 0; i < Math.min(k, n - k); i++) {
            cnt_type++;
            sum_select += unselected_only[i];
            sum_select -= selected_chohuku[i];
            int tmp = cnt_type * cnt_type + sum_select;
            ans = Math.max(ans, tmp);
        }
        System.out.println(ans);
    }
}