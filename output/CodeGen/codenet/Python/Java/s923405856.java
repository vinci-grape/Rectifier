public class s923405856 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int res = -1111111111;
        int s = 0;
        for (int i = 0; i < n; i++) {
            int a = in.nextInt();
            s = Math.max(s + a, a);
            res = Math.max(s, res);
        }
        System.out.println(res);
    }
}