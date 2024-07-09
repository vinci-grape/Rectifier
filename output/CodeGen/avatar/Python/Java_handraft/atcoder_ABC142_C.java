import java.util.*;

public class atcoder_ABC142_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        in.close();
        Arrays.sort(a);
        int i = 0;
        while(i < n-1){
            System.out.print(a[i] + " ");
            i++;
        }
        System.out.println(a[n-1]);
    }
}