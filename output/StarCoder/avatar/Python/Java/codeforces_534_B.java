import java.util.*;
public class codeforces_534_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int v1, v2, t, d, a, v, distance;
        v1 = sc.nextInt();
        v2 = sc.nextInt();
        t = sc.nextInt();
        d = sc.nextInt();
        a = 1;
        v = v1;
        distance = 0;
        for (int i = 0; i < t; i++) {
            if (v - v2 > (t - i - 1) * d) {
                a *= -1;
                v = (t - i - 1) * d + v2;
            }
            distance += v;
            v += a * d;
        }
        System.out.println(distance);
    }
}

