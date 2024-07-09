import java.util.Scanner;

public class atcoder_ABC164_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int l = 2019;
        int[] m = new int[l];
        int a = 0, r = 0;
        for (int i = 0; i < s.length(); i++) {
            a += (int) s.charAt(i) * (int) Math.pow(10, i, l);
            r += m[a % l];
            m[a % l]++;
        }
        System.out.println(r);
    }
}