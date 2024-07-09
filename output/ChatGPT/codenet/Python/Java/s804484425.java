import java.util.*;

public class s804484425 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[][] info = new int[n][2];
        
        for (int i = 0; i < n; i++) {
            info[i][0] = sc.nextInt();
            info[i][1] = sc.nextInt();
        }
        
        Arrays.sort(info, (a, b) -> b[1] - a[1]);
        
        List<Integer> selectedOnly = new ArrayList<>();
        List<Integer> selectedChohuku = new ArrayList<>();
        List<Integer> unselectedOnly = new ArrayList<>();
        Map<Integer, Integer> memo = new HashMap<>();
        
        for (int i = 0; i < k; i++) {
            int t = info[i][0];
            int d = info[i][1];
            
            if (!memo.containsKey(t)) {
                memo.put(t, 1);
                selectedOnly.add(d);
            } else {
                selectedChohuku.add(d);
            }
        }
        
        int cntType = memo.size();
        
        for (int i = k; i < n; i++) {
            int t = info[i][0];
            int d = info[i][1];
            
            if (!memo.containsKey(t)) {
                memo.put(t, 1);
                unselectedOnly.add(d);
            }
        }
        
        Collections.sort(selectedChohuku);
        Collections.sort(unselectedOnly, Collections.reverseOrder());
        
        int sumSelect = sum(selectedChohuku) + sum(selectedOnly);
        int ans = cntType * cntType + sumSelect;
        
        for (int i = 0; i < Math.min(selectedChohuku.size(), unselectedOnly.size()); i++) {
            cntType++;
            sumSelect += unselectedOnly.get(unselectedOnly.size() - 1);
            sumSelect -= selectedChohuku.get(selectedChohuku.size() - 1);
            unselectedOnly.remove(unselectedOnly.size() - 1);
            selectedChohuku.remove(selectedChohuku.size() - 1);
            int tmp = cntType * cntType + sumSelect;
            ans = Math.max(ans, tmp);
        }
        
        System.out.println(ans);
    }
    
    public static int sum(List<Integer> list) {
        int sum = 0;
        
        for (int num : list) {
            sum += num;
        }
        
        return sum;
    }
}