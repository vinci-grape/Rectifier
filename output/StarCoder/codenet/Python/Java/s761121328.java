import java.util.*;
public class s761121328 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int[] A=new int[N];
        for(int i=0;i<N;i++) A[i]=sc.nextInt();
        int s=A[0]^A[1];
        for(int i=2;i<N;i++) s=s^A[i];
        int[] B=new int[N];
        for(int i=0;i<N;i++) B[i]=s^A[i];
        String[] L=new String[N];
        for(int i=0;i<N;i++) L[i]=String.valueOf(B[i]);
        String S=" ";
        for(int i=0;i<N;i++) S+=L[i];
        System.out.println(S);
    }
}