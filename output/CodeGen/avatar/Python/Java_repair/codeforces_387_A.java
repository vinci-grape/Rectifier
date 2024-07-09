import java.util.*;

public class codeforces_387_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int h1 = in.nextInt();
        int m1 = in.nextInt();
        int h2 = in.nextInt();
        int m2 = in.nextInt();
        int m = m1 - m2;
        m = m % 1440;
        System.out.println(m / 60 + ":" + m % 60);
    }
}