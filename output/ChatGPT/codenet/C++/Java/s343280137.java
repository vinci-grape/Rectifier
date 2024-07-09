import java.util.*;
import java.lang.*;
import java.io.*;

public class s343280137 {
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long c = sc.nextLong();
        
        List<Long> x = new ArrayList<>();
        List<Long> v = new ArrayList<>();
        
        for(int i = 0; i < n; i++){
            x.add(sc.nextLong());
            v.add(sc.nextLong());
        }
        
        List<Long> lefttotal = new ArrayList<>(Collections.nCopies((int)n+1, 0L));
        List<Long> maxlefttotal = new ArrayList<>(Collections.nCopies((int)n+1, 0L));
        
        for(int i = 1; i < n+1; i++){
            lefttotal.set(i, lefttotal.get(i-1) + v.get(i));
        }
        
        for(int i = 1; i < n+1; i++){
            maxlefttotal.set(i, Math.max(maxlefttotal.get(i-1), lefttotal.get(i)-x.get(i)));
        }
        
        List<Long> righttotal = new ArrayList<>(Collections.nCopies((int)n+1, 0L));
        List<Long> maxrighttotal = new ArrayList<>(Collections.nCopies((int)n+1, 0L));
        
        for(int i = 1; i < n+1; i++){
            righttotal.set(i, righttotal.get(i-1) + v.get((int)n-i+1));
        }
        
        for(int i = 1; i < n+1; i++){
            maxrighttotal.set(i, Math.max(maxrighttotal.get(i-1), righttotal.get(i) -(c - x.get((int)n+1-i))));
        }
        
        long ans = 0;
        
        for(int i = 1; i < n+1; i++){
            ans = Math.max(ans, lefttotal.get(i)-x.get(i));
            ans = Math.max(ans, lefttotal.get(i)-2*x.get(i)+maxrighttotal.get((int)n-i));
            ans = Math.max(ans, righttotal.get(i)-(c -x.get((int)n+1-i)));
            ans = Math.max(ans, righttotal.get(i)-2*(c-x.get((int)n+1-i))+maxlefttotal.get((int)n-i));
        }
        
        System.out.println(ans);
    }
}