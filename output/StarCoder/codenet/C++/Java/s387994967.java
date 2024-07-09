import java.util.*;
public class s387994967 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();
        if(A<13 && A>=6){
            System.out.println(B/2);
        }
        if(A<6){
            System.out.println(0);
        }
        if(A>=13){
            System.out.println(B);
        }
    }
}