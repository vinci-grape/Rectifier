import java.util.*;
import java.io.*;

public class s438435664 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int sum = 0;
        for(int b = 1; b <= n; b++){
            int cnt = (n+1)/b;
            int md = (n+1)%b;
            sum+=cnt*Math.max(b-k,0)+Math.max(md-k,0);
            if(k==0) sum--;
        }
        System.out.println(sum);
    }
}