import java.util.*;
public class atcoder_ABC127_B {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int r, D, x;
        r = sc.nextInt();
        D = sc.nextInt();
        x = sc.nextInt();
        for (int i = 2; i <= 12; i++)
        {
            System.out.println(Math.round((Math.pow(r, i - 1) * (x + D / (1 - r)) - D / (1 - r))));
        }
    }
}