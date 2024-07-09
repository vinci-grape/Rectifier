import java.util.*;
import java.lang.*;
import java.io.*;

public class s977408144 {
    public static void main (String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int l=sc.nextInt();
        String[] S=new String[n];
        for(int a=0;a<n;a++){
            S[a]=sc.next();
        }
        Arrays.sort(S);
        for(int a=0;a<n;a++){
            System.out.print(S[a]);
        }
    }
}