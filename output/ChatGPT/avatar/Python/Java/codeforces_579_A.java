import java.util.Scanner;

public class codeforces_579_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        int x = 1;
        while (Math.log(n) / Math.log(2) % 1 != 0) {
            x += 1;
            n -= Math.pow(2, (int) (Math.log(n) / Math.log(2)));
        }
        System.out.println(x);
    }
}