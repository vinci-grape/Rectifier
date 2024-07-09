import java.util.*;
public class s607161467 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int R = in.nextInt();
        if (R < 1200) {
            System.out.println("ABC");
        } else if (R < 2800) {
            System.out.println("ARC");
        } else {
            System.out.println("AGC");
        }
    }
}