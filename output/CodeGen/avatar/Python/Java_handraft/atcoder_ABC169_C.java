import java.util.*;

public class atcoder_ABC169_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        double sb = in.nextDouble();
        long b = (long) (sb * 100 + 0.1);
        long result = (a * b / 100);
        System.out.println(result);
    }
}