import java.util.*;

public class codeforces_49_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String[] vo = {"a","e","i","o","u","y","A","E","I","O","U","Y"};
        for(int i=0;i<a.length()-1;i++){
            if(a.charAt(i)==''|| a.charAt(i)=='?') continue;
            else if(a.charAt(i) in vo) System.out.println("YES");
            else System.out.println("NO");
            break;
        }
    }
}