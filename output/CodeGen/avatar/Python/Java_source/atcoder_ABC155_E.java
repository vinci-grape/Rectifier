import java.util.*;
import java.io.*;
import java.lang.*;
import java.math.*;
import java.util.regex.*;

public class atcoder_ABC155_E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int pmin = 1000;
        int mmin = 0;
        s = "0" + s;
        for (char c : s.toCharArray()) {
            int v = (int) c - 48;
            int npmin = Math.min(pmin + 10 - (v + 1), mmin + 10 - v);
            int nmmin = Math.min(pmin + v + 1, mmin + v);
            pmin = npmin;
            mmin = nmmin;
        }
        System.out.println(Math.min(pmin, mmin));
    }
}