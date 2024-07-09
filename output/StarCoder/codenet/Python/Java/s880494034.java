import java.util.*;

public class s880494034 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] XS = new int[N];
        for (int i = 0; i < N; i++) {
            XS[i] = sc.nextInt();
        }
        int m = 9999999999;
        for (int i = 1; i <= 100; i++) {
            int c = 0;
            for (int x : XS) {
                c += (x - i) * (x - i);
            }
            if (m > c) {
                m = c;
            }
        }
        System.out.println(m);
    }
}