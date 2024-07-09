import java.util.Scanner;
import java.util.Vector;

public class s064900223 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] p = new int[n];
        for(int p_i=0; p_i < n; p_i++){
            p[p_i] = in.nextInt();
        }
        int ans = 0;
        for(int i=0; i < n-1; i++){
            if(p[i]==i+1){
                p[i+1] = p[i];
                ans += 1;
            }
        }
        if(p[n-1] == n){
            ans += 1;
        }
        System.out.println(ans);
    }
}