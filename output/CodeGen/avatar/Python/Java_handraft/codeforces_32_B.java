import java.util.*;

public class codeforces_32_B {
    public static void main ( String [ ] args ) {
        String s = new Scanner ( System.in ).nextLine ( );
        System.out.println ( binary(s) ); 
    }
    public static String binary ( String s ) {
        String result = "";
        int i = 0;
        while ( i < s.length ( ) ) {
            if ( s.charAt ( i ) == '.' ) {
                result += "0";
            } else {
                i++;
                if ( s.charAt ( i ) == '.' ) {
                    result += "1";
                } else {
                    result += "2";
                }
            }
            i++;
        }
        return result;
    }
}