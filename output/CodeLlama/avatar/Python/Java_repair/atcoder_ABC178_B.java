import java.util.*;
import java.lang.*;
import java.io.*;
public class atcoder_ABC178_B {
    public static void main ( String[] args ) {
        Scanner sc = new Scanner ( System.in );
        long a = sc.nextInt ( );
        long b = sc.nextInt ( );
        long c = sc.nextInt ( );
        long d = sc.nextInt ( );
        System.out.println ( Math.max ( Math.max ( Math.max ( a * c , b * d) , a * d ) , b * c ) );
    }
}