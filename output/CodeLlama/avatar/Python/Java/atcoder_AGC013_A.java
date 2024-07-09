import java.util.Scanner;
import java.util.Arrays;
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
import java.util.Stack;
import java.util.StringTokenizer;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class atcoder_AGC013_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        a = Arrays.stream(a).distinct().toArray();
        n = a.length;
        int i = 1;
        int ans = 0;
        while (i < n - 1) {
            if (a[i - 1] < a[i] > a[i + 1] || a[i - 1] > a[i] < a[i + 1]) {
                ans++;
                i++;
            }
            i++;
        }
        System.out.println(ans + 1);
    }
}