import java.util.Scanner;
public class codeforces_617_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        System.out.println(0 == a.replaceAll("1", "").length()? 0 : prod(Arrays.stream(a.split("1")).map(s -> s.replaceAll("0", "").length() + 1).toArray()));
    }

    private static long prod(long[] arr) {
        long res = 1;
        for (long i : arr) res *= i;
        return res;
    }
}