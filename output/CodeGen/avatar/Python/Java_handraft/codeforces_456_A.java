import java.util.*;

public class codeforces_456_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] m = new int[n][2];
        for(int i = 0; i < n; i++){
            String[] mItem = in.nextLine().split(" ");
            m[i][0] = Integer.parseInt(mItem[0]);
            m[i][1] = Integer.parseInt(mItem[1]);
        }
        m = sort(m, true);
        int a = m[0][0];
        for(int i = 1; i < n; i++){
            if(m[i][1] > a){
                System.out.println("Happy Alex");
                break;
            }
            a = m[i][0];
        }
        if(a == m[n-1][0]){
            System.out.println("Poor Alex");
        }
    }
    public static int[][] sort(int[][] m, boolean reverse){
        int n = m.length;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(m[i][1] > m[j][1]){
                    int temp = m[i][0];
                    m[i][0] = m[j][0];
                    m[j][0] = temp;
                }
            }
        }
        if(reverse){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    m[i][j] = m[i][j] * -1;
                }
            }
        }
        return m;
    }
}