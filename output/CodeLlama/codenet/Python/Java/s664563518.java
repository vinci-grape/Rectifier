import java.util.Scanner;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Stack;
import java.util.StringTokenizer;
import java.util.TreeSet;
import java.util.TreeMap;
import java.util.Map.Entry;

public class s664563518 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[] s = new String[N];
        int[] t = new int[N];
        for (int i = 0; i < N; i++) {
            s[i] = sc.next();
            t[i] = sc.nextInt();
        }
        String X = sc.next();
        int xi = 0;
        for (int i = 0; i < N; i++) {
            if (s[i].equals(X)) {
                xi = i;
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i < N; i++) {
            if (xi < i) {
                ans += t[i];
            }
        }
        System.out.println(ans);
    }
}