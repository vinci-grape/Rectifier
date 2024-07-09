import java.util.*;

public class codeforces_49_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.nextLine();
        String[] vo = {"a","e","i","o","u","y","A","E","I","O","U","Y"};
        for (int i=a.length()-1; i>=0; i--) {
            if(a.charAt(i)==' '|| a.charAt(i)=='?') continue;
            else if(contain(vo, a.charAt(i))) System.out.println("YES");
            else System.out.println("NO");
            break;
        }
    }
    public static boolean contain(String[] vo, char c) {
        for (String v : vo) {
            if (v.charAt(0) == c) {
                return true;
            }
        }
        return false;
    }
}