import java.util.*;
public class s531812249 {

    public static void main(String[] args) {
        // your code goes here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int ans=0;
        ans+=n*(n-1)/2;
        ans+=m*(m-1)/2;
        System.out.println(ans);
    }
}