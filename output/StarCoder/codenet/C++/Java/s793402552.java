import java.util.*;
import java.io.*;

public class s793402552 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int num = a * (int) Math.pow(10, b) + b;
        int i;
        for (i = 1; i <= 100100; i++) {
            if (i * i == num) break;
        }
        if (i > 100100) System.out.println("No");
        else System.out.println("Yes");
    }
}