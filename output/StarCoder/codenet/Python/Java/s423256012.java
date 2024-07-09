import java.util.*;

public class s423256012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        if((A+B)%2 == 1)
            System.out.println("IMPOSSIBLE");
        else
            System.out.println((A+B)/2);
    }
}