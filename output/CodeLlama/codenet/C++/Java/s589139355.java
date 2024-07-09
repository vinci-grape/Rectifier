import java.util.Scanner;

public class s589139355 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int t = 0;
        int h = 0;
        for (int i = 0; i < a; i++) {
            String taro = sc.next();
            String hana = sc.next();
            int lt = taro.length();
            int lh = hana.length();
            int l;
            if (lt > lh) {
                l = lt;
            } else {
                l = lh;
            }
            int tt = 0;
            int hh = 0;
            if (taro.compareTo(hana) > 0) {
                t = t + 3;
            } else if (hana.compareTo(taro) > 0) {
                h = h + 3;
            } else if (hana.compareTo(taro) == 0) {
                h = h + 1;
                t = t + 1;
            }
        }
        System.out.println(t + " " + h);
    }
}