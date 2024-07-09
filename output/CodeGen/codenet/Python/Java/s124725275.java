import java.util.*;
import java.io.*;
import java.math.*;
import java.text.*;
import java.awt.Point;

import static java.lang.Math.*;
import static java.lang.System.*;
import static java.lang.Integer.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import static java.util.Locale.*;

public class s124725275 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            st = new StringTokenizer(br.readLine());
            int h = Integer.parseInt(st.nextToken());
            int w = Integer.parseInt(st.nextToken());
            int s = Integer.parseInt(st.nextToken());
            int t = Integer.parseInt(st.nextToken());
            int[][] map = new int[h][w];
            for (int i = 0; i < h; i++) {
                map[i] = br.readLine().split(" ");
            }
            int[][] d = new int[h][w];
            for (int i = 0; i < h; i++) {
                d[i] = br.readLine().split(" ");
            }
            int[][] ans = new int[h][w];
            for (int i = 0; i < h; i++) {
                ans[i] = br.readLine().split(" ");
            }
            int[][] d2 = new int[h][w];
            for (int i = 0; i < h; i++) {
                d2[i] = br.readLine().split(" ");
            }
            int[][] ans2 = new int[h][w];
            for (int i = 0; i < h; i++) {