import java.util.*;
public class s914373115 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long x = in.nextLong();
        long sum = 100;
        int i = 0;
        while (sum < x) {
            sum += sum / 100;
            i++;
        }
        System.out.println(i);
    }
}