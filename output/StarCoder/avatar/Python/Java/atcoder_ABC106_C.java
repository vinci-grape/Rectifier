import java.util.*;
public class atcoder_ABC106_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int k = sc.nextInt();
        int l = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i)!= '1') {
                break;
            }
            l++;
        }
        if(l >= k) {
            System.out.println(1);
        } else {
            System.out.println(s.charAt(l));
        }
    }
}