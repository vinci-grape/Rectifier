import java.util.*;
public class atcoder_ABC153_A {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int h = in.nextInt();
        int a = in.nextInt();
        int sho = h / a;
        int am = h % a;
        if (am!= 0) {
            sho += 1;
        }
        System.out.println(sho);
    }
}
