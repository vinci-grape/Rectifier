import java.util.*;
import java.io.*;
import java.math.*;

public class s983388294 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }
        int curr=0;
        for(int i=0; i<n; i++) {
            if(a[i]==curr+1) curr++;
        }
        if(curr>0) {
            System.out.println(n-curr);
        }
        else {
            System.out.println("-1");
        }
    }
}