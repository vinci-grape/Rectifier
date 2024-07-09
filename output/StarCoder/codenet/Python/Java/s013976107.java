import java.util.*;
public class s013976107 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        String S = sc.next();
        if(S.charAt(A) == '-' && S.indexOf('-') == 1)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}