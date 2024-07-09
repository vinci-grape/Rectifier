import java.util.Scanner;
public class atcoder_ABC162_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String S = sc.next();
        calculate(N, S);
    }
    public static void calculate(int n, String s) {
        int rNum = 0, gNum = 0, bNum = 0, sum = 0;
        char[] arr = s.toCharArray();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 'R') rNum++;
            if (arr[i] == 'G') gNum++;
            if (arr[i] == 'B') bNum++;
        }
        for (int step = 1; step <= Math.ceil(n / 2.0) + 1; step++) {
            for (int i = 0; i < n - 2 * step; i++) {
                String s1 = new String(new char[]{arr[i], arr[i + step], arr[i + step * 2]});
                if (s1.equals("RGB") || s1.equals("RBG") || s1.equals("BGR") || s1.equals("BRG") || s1.equals("GBR") || s1.equals("GRB")) {
                    sum++;
                }
            }
        }
        System.out.println(rNum * gNum * bNum - sum);
    }
}