import java.util.*;

public class s259332673 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int h1,h2,m1,m2,k;
        h1 = in.nextInt();
        m1 = in.nextInt();
        h2 = in.nextInt();
        m2 = in.nextInt();
        k = in.nextInt();
        int ans = h2*60+m2-(h1*60+m1);
        System.out.println(ans-k);
    }
}