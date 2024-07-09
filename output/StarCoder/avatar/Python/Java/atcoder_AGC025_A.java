import java.util.Scanner;
public class atcoder_AGC025_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String n = in.next();
        int new = 0;
        for (int i = 0; i < n.length(); i++) {
            new += Integer.parseInt(n.charAt(i) + "");
        }
        System.out.println(new);
    }
}