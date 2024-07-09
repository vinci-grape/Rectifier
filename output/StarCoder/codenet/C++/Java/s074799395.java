import java.util.*;
public class s074799395 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char B = in.next().charAt(0);
        if(B == 'A')
            System.out.println('T');
        else if(B == 'T')
            System.out.println('A');
        else if(B == 'C')
            System.out.println('G');
        else
            System.out.println('C');
    }
}