import java.util.*;

public class s684825280 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] cnt = new int[200001];
        for(int i = 0; i < n; ++i){
            int x = sc.nextInt();
            cnt[x]++;
        }
        int ans = 0;
        int[] a = new int[200001];
        int idx = 0;
        for(int i = 0; i < cnt.length; ++i){
            if(cnt[i] > 0){
                a[idx++] = cnt[i];
            }
        }
        Arrays.sort(a);
        int m = a.length - k;
        for(int i = 0; i < m; ++i){
            ans += a[i];
        }
        System.out.println(ans);
    }
}