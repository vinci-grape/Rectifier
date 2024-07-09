import java.util.*;

public class atcoder_ABC150_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        
        List<List<Integer>> orig = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            temp.add(i);
        }
        permute(orig, temp, 0, n-1);
        
        List<Integer> p = new ArrayList<>();
        String[] pArr = scanner.nextLine().split(" ");
        for (String num : pArr) {
            p.add(Integer.parseInt(num));
        }
        
        List<Integer> q = new ArrayList<>();
        String[] qArr = scanner.nextLine().split(" ");
        for (String num : qArr) {
            q.add(Integer.parseInt(num));
        }
        
        int pn = orig.indexOf(p);
        int qn = orig.indexOf(q);
        
        System.out.println(Math.abs(pn - qn));
    }
    
    public static void permute(List<List<Integer>> orig, List<Integer> temp, int l, int r) {
        if (l == r) {
            orig.add(new ArrayList<>(temp));
        } else {
            for (int i = l; i <= r; i++) {
                Collections.swap(temp, l, i);
                permute(orig, temp, l+1, r);
                Collections.swap(temp, l, i);
            }
        }
    }
}