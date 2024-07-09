import java.util.*;
import java.lang.*;
import java.io.*;


class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] info = new int[n];
        for (int i = 0; i < n; i++) {
            info[i] = in.nextInt();
        }
        info = java.util.Arrays.stream(info).sorted((a, b) -> b - a).toArray();
        int[] selected = java.util.Arrays.stream(info).limit(k).toArray();
        int[] selected_only = new int[k];
        int[] selected_chohuku = new int[k];
        int cnt_type = 0;
        int sum_select = 0;
        int[] unselected_only = new int[n - k];
        int[] memo = new int[n];
        for (int i = 0; i < k; i++) {
            if (memo[selected[i]] == 0) {
                memo[selected[i]] = 1;
                selected_only[cnt_type] = info[selected[i]];
                cnt_type++;
            } else {
                selected_chohuku[cnt_type - 1] = info[selected[i]];
            }
        }
        for (int i = k; i < n; i++) {
            if (memo[info[i]] == 0) {
                memo[info[i]] = 1;
                unselected_only[cnt_type] = info[i];
                cnt_type++;
            }
        }
        int sum_select = java.util.Arrays.stream(selected_chohuku).sum() + java.util.Arrays.stream(selected_only).sum();
        int ans = cnt_type * cnt_type + sum_select;
        java.util.Arrays.sort(unselected_only);
        for (int i = 0; i < min(k, java.util.Arrays.stream(unselected_only).limit(n - k).count()); i++) {
            cnt_type++;
            sum_select += unselected_only[i];
            sum_select -= selected_chohuku[i];
            int tmp = cnt_type * cnt_type + sum_select;
            ans = Math.max(ans, tmp);
            del unselected_only[i];
            del selected_chohuku[i];
        }
        System.out.println(ans);
    }
}