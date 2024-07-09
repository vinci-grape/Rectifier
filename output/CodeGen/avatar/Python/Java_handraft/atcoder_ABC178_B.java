import java.util.*;
import java.io.*;

public class atcoder_ABC178_B {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(" ");
        long a = Long.parseLong(s[0]);
        long b = Long.parseLong(s[1]);
        long c = Long.parseLong(s[2]);
        long d = Long.parseLong(s[3]);
        System.out.println(Math.max(Math.max(Math.max(a * c, b * d), a * d), b * c));
    }
}