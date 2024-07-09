import java.util.Scanner;

public class s448220316 {
    
    static int[] fa, v;
    
    static int get(int x) {
        if(x == fa[x]) return x;
        int f = get(fa[x]);
        v[x] += v[fa[x]];
        return fa[x] = f;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        fa = new int[n+1];
        v = new int[2*m+1];
        
        for(int i = 1; i <= n; i++) fa[i] = i;
        
        for(int i = 1; i <= m; i++) {
            int l = sc.nextInt();
            int r = sc.nextInt();
            int vi = sc.nextInt();
            int li = get(l);
            int ri = get(r);
            
            if(li != ri) {
                v[ri] = vi - v[r] + v[l];
                fa[ri] = li;
            } else {
                if(v[r] - v[l] != vi) {
                    System.out.println("No");
                    return;
                }
            }
        }
        
        System.out.println("Yes");
    }
}