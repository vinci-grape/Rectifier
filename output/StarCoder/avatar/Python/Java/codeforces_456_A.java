import java.util.*;
public class codeforces_456_A {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] m = new int[n][2];
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                m[i][j] = in.nextInt();
            }
        }
        Arrays.sort(m, new Comparator<int[]>(){
            public int compare(int[] a, int[] b){
                return b[1] - a[1];
            }
        });
        int[] a = m[0];
        for(int[] i : m){
            if(i[1] > a[1]){
                System.out.println("Happy Alex");
                break;
            }
            a = i;
        }else{
            System.out.println("Poor Alex");
        }
    }
}