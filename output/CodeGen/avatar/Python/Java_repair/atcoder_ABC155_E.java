import java.util.*;
import java.io.*;
import java.lang.*;
import java.math.*;
import java.util.*;
import java.util.*;
import java.io.*;
import java.lang.*;
import java.math.*;
import java.util.*;
import java.util.regex.*;

public class atcoder_ABC155_E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int pmin = 1000;
        int mmin = 0;
        s = "0" + s;
        String[] v = s.split("");
        for (int i = 0; i < v.length; i++) {
            int v1 = Integer.parseInt(v[i]);
            int v2 = Integer.parseInt(v[i + 1]);
            int npmin = Math.min(pmin + 10 - (v1 + 1), mmin + 10 - v1);
            int nmmin = Math.min(pmin + v1 + 1, mmin + v1);
            pmin = npmin;
            mmin = nmmin;
        }
        System.out.println(Math.min(pmin, mmin));
    }
}