import java.util.*;
import java.lang.*;
import java.io.*;
public class atcoder_ABC178_B {
    public static void main ( String[] args ) {
        Scanner sc = new Scanner ( System.in );
        int a = sc.nextInt ( );
        int b = sc.nextInt ( );
        int c = sc.nextInt ( );
        int d = sc.nextInt ( );
        System.out.println ( Math.max ( a * c , b * d , a * d , b * c ) );
    }
}