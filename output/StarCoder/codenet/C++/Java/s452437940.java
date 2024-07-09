import java.util.*;
public class s452437940 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        long x = in.nextLong();
        long s = (b/x-a/x);
        if(a%x==0)s++;
        System.out.println(s);
    }
}