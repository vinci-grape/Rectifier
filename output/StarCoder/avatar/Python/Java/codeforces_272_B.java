import java.util.*;
public class codeforces_272_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
            arr[i] = sc.nextInt();
        System.out.println(nPairsWithCommonFX(arr));
    }
    public static int nPairsWithCommonFX(int[] arr) {
        Map<Integer, List<Integer>> map = new HashMap<>();
        List<Integer> fx = new ArrayList<>();
        for(int i=0;i<arr.length;i++) {
            int y = f(arr[i]);
            if(!map.containsKey(y)) {
                map.put(y, new ArrayList<>());
                fx.add(y);
            }
            map.get(y).add(arr[i]);
        }
        int ans = 0;
        for(int i=0;i<fx.size();i++) {
            ans += map.get(fx.get(i)).size() * map.get(fx.get(i)).size();
        }
        return ans - fx.size();
    }
    public static int f(int n) {
        int y = 1;
        while(n!= 1) {
            if(n % 2!= 0)
                y++;
            n /= 2;
        }
        return y;
    }
}

