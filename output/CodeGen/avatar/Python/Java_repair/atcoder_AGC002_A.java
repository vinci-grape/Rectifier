import java.util.*;
import java.io.*;

public class atcoder_AGC002_A {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        String s;
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        if (a > 0) {
            System.out.println("Positive");
        } else if (a <= 0 && b >= 0) {
            System.out.println("Zero");
        } else {
            if ((a + b) % 2 == 0) {
                System.out.println("Negative");
            } else {
                System.out.println("Positive");
            }
        }
    }
}