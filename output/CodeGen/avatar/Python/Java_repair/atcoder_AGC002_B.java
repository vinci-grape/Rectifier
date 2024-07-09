import java.util.*;
import java.math.*;
import java.text.*;
import java.awt.*;
import java.awt.geom.*;

import static java.lang.Math.*;

public class atcoder_AGC002_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int[] b = new int[m];
        for(int b_i=0; b_i < m; b_i++){
            b[b_i] = in.nextInt();
        }
        int[] c = new int[m];
        for(int c_i=0; c_i < m; c_i++){
            c[