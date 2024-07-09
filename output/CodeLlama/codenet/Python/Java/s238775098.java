import java.util.Scanner;
public class s238775098 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double res = 0;
        for (int i = 0; i < n; i++) {
            String[] s = sc.nextLine().split(" ");
            if (s[1].equals("BTC")) {
                res += Double.parseDouble(s[0]) * 380000;
            } else {
                res += Integer.parseInt(s[0]);
            }
        }
        System.out.println(res);
    }
}