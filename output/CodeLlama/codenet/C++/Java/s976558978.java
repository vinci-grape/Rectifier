/*
URL_HERE
*/
/*

*/
import java.io.*;
import java.util.*;

public class s976558978 {
    public static void main(String[] args) {
        Scanner in = new Scanner(new BufferedInputStream(System.in));
        PrintWriter out = new PrintWriter(System.out);

        int a = in.nextInt();
        int b = in.nextInt();
        if (a < b) {
            for (int i = 0; i < b; i++) {
                out.print(a + " ");
            }
            out.println();
        } else {
            for (int i = 0; i < a; i++) {
                out.print(b + " ");
            }
            out.println();
        }
        out.close();
    }
}