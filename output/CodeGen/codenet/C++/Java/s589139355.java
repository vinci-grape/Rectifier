public class s589139355 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        String taro = in.next();
        String hana = in.next();
        int t = 0, h = 0;
        for (int i = 0; i < a; i++) {
            String taro1 = in.next();
            String hana1 = in.next();
            int lt = taro1.length();
            int lh = hana1.length();
            if (lt > lh) {
                l = lt;
            } else {
                l = lh;
            }
            int tt = 0;
            int hh = 0;
            if (taro1.compareTo(hana1) > 0) {
                t = t + 3;
            } else if (hana1.compareTo(taro1) > 0) {
                h = h + 3;
            } else if (hana1.compareTo(taro1) == 0) {
                h = h + 1;
                t = t + 1;
            }
        }
        System.out.println(t + " " + h);
    }
}