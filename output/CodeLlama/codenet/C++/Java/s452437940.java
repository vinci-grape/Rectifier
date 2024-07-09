import java.util.Scanner;
public class s452437940 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long x = sc.nextLong();
        long s = (b / x - a / x);
        if (a % x == 0)
            s++;
        System.out.println(s);
    }
}