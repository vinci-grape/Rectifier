import java.util.*;
public class s242961129 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int[] A=new int[N];
        for(int i=0;i<N;i++) A[i]=sc.nextInt();
        int ans=Math.abs(A[N-1]);
        int[] B=new int[N+2];
        B[0]=0;
        for(int i=0;i<N;i++) B[i+1]=A[i];
        B[N+1]=0;
        int[] diff=new int[N];
        for(int i=1;i<=N;i++) {
            diff[i-1]=Math.abs(B[i]-B[i-1])+Math.abs(B[i]-B[i+1])-Math.abs(B[i-1]-B[i+1]);
            ans+=Math.abs(B[i]-B[i-1]);
        }
        for(int i=0;i<N;i++) System.out.println(ans-diff[i]);
    }
}