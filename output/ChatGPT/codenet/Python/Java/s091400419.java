import java.util.Scanner;

public class s091400419 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int[] lst = {a+b, a-b, a*b};
        int max = Integer.MIN_VALUE;
        for (int i : lst) {
            if (i > max) {
                max = i;
            }
        }
        System.out.println(max);
    }
}