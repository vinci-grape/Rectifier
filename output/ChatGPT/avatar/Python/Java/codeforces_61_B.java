import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

public class codeforces_61_B {
    
    public static boolean valid(int i, int j, int n, int m) {
        if (i < n && i >= 0 && j >= 0 && j < m) return true;
        return false;
    }
    
    public static int sumn(int i, int n) {
        return (n - i) * (i + n) / 2;
    }
    
    public static double sqfun(int a, int b, int c) {
        return (-b + Math.sqrt(b * b - 4 * a * c)) / 2 * a;
    }
    
    public static int[] value() throws IOException {
        String[] strNums;
        strNums = br.readLine().split("\\s");
        int[] nums = new int[strNums.length];
        for (int i = 0; i < strNums.length; i++) {
            nums[i] = Integer.parseInt(strNums[i]);
        }
        return nums;
    }
    
    public static int[] values() throws IOException {
        String[] strNums;
        strNums = br.readLine().split("\\s");
        int[] nums = new int[strNums.length];
        for (int i = 0; i < strNums.length; i++) {
            nums[i] = Integer.parseInt(strNums[i]);
        }
        return nums;
    }
    
    public static int[] inlst() throws IOException {
        String[] strNums;
        strNums = br.readLine().split("\\s");
        int[] nums = new int[strNums.length];
        for (int i = 0; i < strNums.length; i++) {
            nums[i] = Integer.parseInt(strNums[i]);
        }
        return nums;
    }
    
    public static int[] inlsts() throws IOException {
        String[] strNums;
        strNums = br.readLine().split("\\s");
        int[] nums = new int[strNums.length];
        for (int i = 0; i < strNums.length; i++) {
            nums[i] = Integer.parseInt(strNums[i]);
        }
        return nums;
    }
    
    public static int inp() throws IOException {
        return Integer.parseInt(br.readLine());
    }
    
    public static int inps() throws IOException {
        return Integer.parseInt(br.readLine());
    }
    
    public static String instr() throws IOException {
        return br.readLine();
    }
    
    public static String[] stlst() throws IOException {
        return br.readLine().split("\\s");
    }
    
    public static String f(String s) {
        String r = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c != '-' && c != ';' && c != '_') r += Character.toLowerCase(c);
        }
        return r;
    }
    
    public static void solve() throws IOException {
        List<String> l = new ArrayList<>();
        for (int i = 0; i < 3; i++) {
            l.add(f(instr()));
        }
        List<String> permutations = new ArrayList<>();
        permute(l, 0, l.size()-1, permutations);
        for (int i = 0; i < inp(); i++) {
            if (permutations.contains(f(instr()))) System.out.println("ACC");
            else System.out.println("WA");
        }
    }
    
    public static void permute(List<String> list, int l, int r, List<String> permutations) {
        if (l == r) {
            String perm = "";
            for (String s : list) {
                perm += s;
            }
            permutations.add(perm);
        } else {
            for (int i = l; i <= r; i++) {
                Collections.swap(list, l, i);
                permute(list, l + 1, r, permutations);
                Collections.swap(list, l, i);
            }
        }
    }
    
    public static void main(String[] args) throws IOException {
        solve();
    }
}