import java.util.*;
public class s275739084 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int A = scan.nextInt();
        int B = scan.nextInt();
        int C = A+B;
        if(A%3!=0 && B%3!=0 && C%3!=0)
            System.out.println("Impossible");
        else
            System.out.println("Possible");
    }
}