import java.util.*;

public class codeforces_598_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            System.out.println(solve(n));
        }
    }
    public static long solve(long n){
        long s = (1 + n) * n / 2;
        long t = 1;
        while(t <= n){
            s -= 2 * t;
            t *= 2;
        }
        return s;
    }
}