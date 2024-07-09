import java.util.*;
import java.lang.*;
import java.io.*;
public class s716198307
 {
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[100];
        double avg = 0;
        double s = 0;
        double ans = 0;
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
            avg += a[i];
        }
        avg /= n;
        s = Math.abs(a[0] - avg);
        for(int i = 1; i < n; i++){
            if(s > Math.abs(a[i] - avg)){
                s = Math.abs(a[i] - avg);
                ans = i;
            }
        }
        System.out.println(ans);
    }
}