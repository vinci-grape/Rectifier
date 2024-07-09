import java.util.*;
public class s101447419 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] v=new int[n];
        for(int i=0;i<n;i++) v[i]=sc.nextInt();
        int[] ve=new int[n/2];
        int[] vo=new int[n/2];
        for(int i=0;i<n/2;i++) {
            ve[i]=v[2*i];
            vo[i]=v[2*i+1];
        }
        Arrays.sort(ve);
        Arrays.sort(vo);
        int ans=n;
        if(ve[0]==vo[0]) {
            ans=n-ve[0]-vo[0];
        }
        else if(ve[0]==vo[1]) {
            ans=n-ve[0]-vo[1];
        }
        else if(ve[1]==vo[0]) {
            ans=n-ve[1]-vo[0];
        }
        else if(ve[1]==vo[1]) {
            ans=n-Math.min(ve[1],vo[1]);
        }
        System.out.println(ans);
    }
}