import java.util.*;
public class atcoder_ABC123_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<int[]> menu = new ArrayList<int[]>();
        for(int i = 0; i < 5; i++) {
            String m = sc.next();
            int e = Integer.parseInt(m.substring(m.length() - 1));
            if(e == 0) e = 10;
            menu.add(new int[]{Integer.parseInt(m), e});
        }
        Collections.sort(menu, new Comparator<int[]>(){
            public int compare(int[] a, int[] b) {
                return a[1] - b[1];
            }
        });
        int ans = 0;
        for(int i = 1; i < menu.size(); i++) {
            ans += Math.ceil((double)menu.get(i)[0] / 10) * 10;
        }
        System.out.println(ans + menu.get(0)[0]);
    }
}