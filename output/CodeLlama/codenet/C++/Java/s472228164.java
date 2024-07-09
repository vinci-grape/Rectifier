import java.util.Scanner;

public class s472228164 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        if(y % 2 == 0) {
            int t = (int)(0.5*y) - x;
            if(t >= 0 && (x-t) >= 0)
                System.out.println("Yes");
            else
                System.out.println("No");
        }
        else
            System.out.println("No");
    }
}