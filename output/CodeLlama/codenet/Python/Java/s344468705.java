import java.util.*;
import java.io.*;
import java.lang.*;
import java.math.*;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.Set;
import java.util.StringTokenizer;

import static java.lang.Math.*;

public class s344468705 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            if (num >= dp[dp.length - 1]) {
                dp[dp.length] = num;
            } else {
                int idx = Arrays.binarySearch(dp, num);
                dp[idx] = num;
            }
        }
        System.out.println(dp.length - 1);
    }
}