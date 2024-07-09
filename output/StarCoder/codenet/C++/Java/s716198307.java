import java.util.*;
public class s716198307 {
    public static void main(String[] args){
        Scanner cin=new Scanner(System.in);
        int n,a[],avg=0,s,ans;
        n=cin.nextInt();
        a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=cin.nextInt();
            avg+=a[i];
        }
        avg/=n;
        s=Math.abs(a[0]-avg);
        ans=0;
        for(int i=1;i<n;i++){
            if(s>Math.abs(a[i]-avg)){
                s=Math.abs(a[i]-avg);
                ans=i;
            }
        }
        System.out.println(ans);
    }
}