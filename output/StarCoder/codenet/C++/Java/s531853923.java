import java.util.*;
public class s531853923 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        int d = in.nextInt();
        if (a*b%2==1&&(c+d)%2==1)
        {
            System.out.println("No");
        }
        else
        {
            System.out.println("Yes");
        }
    }
}