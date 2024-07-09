import java.util.Scanner;

public class codeforces_86_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int r = sc.nextInt();
        int curr = r;
        int s = 0;
        while (curr != 0) {
            s++;
            curr /= 10;
        }
        int first = (int) Math.pow(10, s);
        int second = first / 2;
        int ans = -1;
        for (int i = l; i <= r; i++) {
            if (i >= l && i <= r) {
                curr = i;
                String rev = "";
                while (curr != 0) {
                    rev = (9 - (curr % 10)) + rev;
                    curr /= 10;
                }
                ans = Math.max(ans, Integer.parseInt(rev) * i);
            }
        }
        System.out.println(ans);
    }
}