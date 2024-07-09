import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        String[] s = scanner.nextLine().split(" ");
        long a = Long.parseLong(s[0]);
        long b = Long.parseLong(s[1]);
        long c = Long.parseLong(s[2]);
        long d = Long.parseLong(s[3]);
        System.out.println(Math.max(Math.max(Math.max(Math.max(a * c, b * d), a * d), b * c));
    }
}