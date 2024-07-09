public class s472228164 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        String result = check(x, y);
        System.out.println(result);
    }

    public static String check(int x, int y) {
        if (y % 2 == 0) {
            int t = (int) (0.5 * y) - x;
            if (t >= 0 && (x - t) >= 0) {
                return "Yes";
            }
        }
        return "No";
    }
}