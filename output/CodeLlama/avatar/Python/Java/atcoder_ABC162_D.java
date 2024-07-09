import java.util.Scanner;
public class atcoder_ABC162_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int rNum = 0;
        int gNum = 0;
        int bNum = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'R') {
                rNum++;
            } else if (s.charAt(i) == 'G') {
                gNum++;
            } else {
                bNum++;
            }
        }
        for (int step = 1; step <= (int) Math.ceil(n / 2.0); step++) {
            for (int i = 0; i < n - 2 * step; i++) {
                String s1 = s.substring(i, i + step);
                String s2 = s.substring(i + step, i + step * 2);
                String s3 = s.substring(i + step * 2, i + step * 2 + step);
                if (s1.equals("RGB") || s1.equals("RBG") || s1.equals("BGR") || s1.equals("BRG") || s1.equals("GBR") || s1.equals("GRB")) {
                    sum++;
                }
                if (s2.equals("RGB") || s2.equals("RBG") || s2.equals("BGR") || s2.equals("BRG") || s2.equals("GBR") || s2.equals("GRB")) {
                    sum++;
                }
                if (s3.equals("RGB") || s3.equals("RBG") || s3.equals("BGR") || s3.equals("BRG") || s3.equals("GBR") || s3.equals("GRB")) {
                    sum++;
                }
            }
        }
        System.out.println(rNum * gNum * bNum - sum);
    }
}