import java.util.*;
public class s605014348 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.print(n + ":");
        while (n!= 1) {
            System.out.print(" " + div(n));
            n = n / div(n);
        }
        System.out.println();
    }

    public static int div(int n) {
        if (n % 2 == 0)
            return 2;
        int s = (int) Math.sqrt(n);
        for (int i = 3; i <= s; i += 2) {
            if (n % i == 0)
                return i;
        }
        return n;
    }
}