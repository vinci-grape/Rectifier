import java.io.*;
import java.util.*;

public class s929864256 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        System.out.println(Math.max(a + b, Math.max(a - b, a * b)));
    }
}