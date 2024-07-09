import java.util.Scanner;

public class s698030085 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long long a = in.nextLong();
        long long b = in.nextLong();
        if ((a + b) % 2 == 0) {
            System.out.println((a + b) / 2);
        } else {
            System.out.println("IMPOSSIBLE");
        }
    }
}