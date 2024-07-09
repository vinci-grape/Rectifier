import java.util.*;

public class s430322735 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<String> lst = new ArrayList<>();
        int pair = 0;
        
        for (int i = 0; i < n; i++) {
            char[] chars = scanner.next().toCharArray();
            Arrays.sort(chars);
            String st = new String(chars);
            lst.add(st);
        }
        
        Collections.sort(lst);
        lst.add("end");
        String pre = "";
        int tmp_cnt = 0;
        int cnt = 0;
        
        for (String i : lst) {
            if (i.equals(pre)) {
                tmp_cnt++;
            } else {
                cnt += sum(tmp_cnt + 1);
                tmp_cnt = 0;
            }
            pre = i;
        }
        
        System.out.println(cnt);
    }
    
    public static int sum(int n) {
        return n * (n - 1) / 2;
    }
}