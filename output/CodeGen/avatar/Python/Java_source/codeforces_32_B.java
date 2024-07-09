public class codeforces_32_B {
    public String binary ( String s ) {
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