import java.util.*;
public class atcoder_ABC124_C {
    public static void main ( String [ ] args )
    {
        Scanner sc = new Scanner ( System.in );
        String s = sc.nextLine ( );
        int even = 0, odd = 0;
        for ( int i = 0 ; i < s.length ( ) ; i++ )
        {
            if ( i % 2 == 0 )
            {
                if ( s.charAt ( i ) == '0' )
                    even++;
            }
            else
            {
                if ( s.charAt ( i ) == '1' )
                    odd++;
            }
        }
        System.out.println ( Math.min ( s.length ( ) - ( even + odd ), s.length ( ) - ( odd + even ) ) );
    }
}