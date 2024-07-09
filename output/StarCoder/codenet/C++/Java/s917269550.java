import java.util.*;
public class s917269550 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long x = sc.nextLong();
        long y = sc.nextLong();
        if(Math.abs(x-y) <= 1) System.out.println("Brown");
        else System.out.println("Alice");
    }
}