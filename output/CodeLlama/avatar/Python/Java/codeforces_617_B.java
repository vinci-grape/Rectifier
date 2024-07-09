import java.util.Scanner;
import java.util.Arrays;
import java.util.stream.IntStream;

public class codeforces_617_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        System.out.println(Arrays.asList(a.replaceAll("0+", "").split("1")));
        System.out.println(a.replaceAll("1", "").length() == 0 ? 0 : IntStream.of(a.replaceAll("0+", "").split("1")).map(s -> s.length() + 1).reduce(1, (a, b) -> a * b));
    }
}