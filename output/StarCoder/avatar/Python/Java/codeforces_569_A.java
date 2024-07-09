import java.util.*;
public class codeforces_569_A {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int s = sc.nextInt();
        int q = sc.nextInt();
        int ans = 0;
        while (s < t)
        {
            s *= q;
            ans++;
        }
        System.out.println(ans);
    }
}

