import java.util.*;

public class codeforces_23_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i = 0; i < n; i++){
            int a = in.nextInt();
            if(a < 2){
                System.out.println(0);
            }
            if(a >= 2){
                System.out.println(a - 2);
            }
        }
    }
}