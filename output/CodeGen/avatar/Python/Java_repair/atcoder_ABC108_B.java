import java.util.*;

public class atcoder_ABC108_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long x1 = in.nextLong();
        long y1 = in.nextLong();
        long x2 = in.nextLong();
        long y2 = in.nextLong();
        long DIF1 = x2 - x1;
        long DIF2 = y2 - y1;
        long x3 = x2 - DIF2;
        long y3 = y2 + DIF1;
        long x4 = x1 - DIF2;
        long y4 = y1 + DIF1;
        System.out.println(x3 + " " + y3 + " " + x4 + " " + y4);
    }
}