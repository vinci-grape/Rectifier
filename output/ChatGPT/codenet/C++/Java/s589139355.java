import java.util.Scanner;

public class s589139355 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int t = 0, h = 0, lt, lh, tt, hh, l;
        String taro, hana;
        for (int i = 0; i < a; ++i) {
            taro = scanner.next();
            hana = scanner.next();
            lt = taro.length();
            lh = hana.length();
            if (lt > lh) {
                l = lt;
            } else {
                l = lh;
            }
            tt = 0;
            hh = 0;

            if (taro.compareTo(hana) > 0) {
                t += 3;
            } else if (hana.compareTo(taro) > 0) {
                h += 3;
            } else if (hana.compareTo(taro) == 0) {
                h += 1;
                t += 1;
            }
        }
        System.out.println(t + " " + h);
    }
}