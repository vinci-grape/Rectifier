import java.util.Scanner;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

public class atcoder_ABC162_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s = in.next();
        List<String> arr = new ArrayList<String>();
        for (int i = 0; i < n; i++) {
            arr.add(in.next());
        }
        long rNum = arr.stream().filter(s1 -> s1.equals("R")).count();
        long gNum = arr.stream().filter(s1 -> s1.equals("G")).count();
        long bNum = arr.stream().filter(s1 -> s1.equals("B")).count();
        int sum = 0;
        for (int step = 1; step <= Math.ceil(n / 2); step++) {
            for (int i = n - 2 * step; i < n; i++) {
                s = arr.get(i) + arr.get(i + step) + arr.get(i + step * 2);
                if (s.equals("RGB") || s.equals("RBG") || s.equals("BGR") || s.equals("BRG") || s.equals("GBR") || s.equals("GRB")) {
                    sum++;
                }
            }
        }
        System.out.println((long) rNum * gNum * bNum - sum);
    }
}