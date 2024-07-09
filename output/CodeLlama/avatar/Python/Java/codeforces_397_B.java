public class codeforces_397_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String[] res = new String[t];
        for (int i = 0; i < t; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            if (a >= b * c) {
                res[i] = "Yes";
            } else {
                res[i] = "No";
            }
        }
        for (int i = 0; i < t; i++) {
            System.out.println(res[i]);
        }
    }
}