import java.util.*;
public class atcoder_AGC027_A {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int x = in.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int ans = 0;
        if(a[0]>x){
            System.out.println(0);
            return;
        }
        for(int i=0;i<n;i++){
            if(a[i]>x){
                x = 0;
                break;
            }
            x -= a[i];
            ans++;
        }
        if(x!=0){
            ans--;
        }
        System.out.println(ans);
    }
}