import java.util.*;
import java.io.*;

public class s804484425 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");
        int n = Integer.parseInt(str[0]);
        int k = Integer.parseInt(str[1]);
        int[][] info = new int[n][2];
        for (int i = 0; i < n; i++) {
            String[] str2 = br.readLine().split(" ");
            info[i][0] = Integer.parseInt(str2[0]);
            info[i][1] = Integer.parseInt(str2[1]);
        }
        Arrays.sort(info, (a, b) -> b[1] - a[1]);
        int[] selected = new int[k];
        int[] selected_only = new int[k];
        int[] selected_chohuku = new int[k];
        int[] unselected_only = new int[n - k];
        int cnt_type = 0;
        int sum_select = 0;
        for (int i = 0; i < k; i++) {
            int t = info[i][0];
            int d = info[i][1];
            if (selected[t] == 0) {
                cnt_type++;
                selected[t] = 1;
                selected_only[i] = d;
            } else {
                selected_chohuku[i] = d;
            }
        }
        for (int i = k; i < n; i++) {
            int t = info[i][0];
            int d = info[i][1];
            if (selected[t] == 0) {
                unselected_only[i - k] = d;
            }
        }
        for (int i = 0; i < k; i++) {
            sum_select += selected_chohuku[i];
        }
        for (int i = 0; i < n - k; i++) {
            sum_select += unselected_only[i];
        }
        int ans = cnt_type * cnt_type + sum_select;
        for (int i = 0; i < k; i++) {
            sum_select -= selected_chohuku[i];
            cnt_type++;
            sum_select += unselected_only[n - k - 1];
            cnt_type--;
            int tmp = cnt_type * cnt_type + sum_select;
            ans = Math.max(ans, tmp);
        }
        System.out.println(ans);
    }
}