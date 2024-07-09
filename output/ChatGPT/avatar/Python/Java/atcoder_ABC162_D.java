import java.util.Scanner;

public class atcoder_ABC162_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        String S = scanner.next();
        calculate(N, S);
    }

    public static void calculate(int n, String s) {
        char[] arr = s.toCharArray();
        int rNum = countChar(arr, 'R');
        int gNum = countChar(arr, 'G');
        int bNum = countChar(arr, 'B');
        int sum = 0;
        for (int step = 1; step <= Math.ceil(n / 2.0); step++) {
            for (int i = 0; i < n - 2 * step; i++) {
                String sub = String.valueOf(arr[i]) + arr[i + step] + arr[i + step * 2];
                if (sub.equals("RGB") || sub.equals("RBG") || sub.equals("BGR") || sub.equals("BRG") || sub.equals("GBR") || sub.equals("GRB")) {
                    sum++;
                }
            }
        }
        System.out.println(rNum * gNum * bNum - sum);
    }

    public static int countChar(char[] arr, char c) {
        int count = 0;
        for (char ch : arr) {
            if (ch == c) {
                count++;
            }
        }
        return count;
    }
}