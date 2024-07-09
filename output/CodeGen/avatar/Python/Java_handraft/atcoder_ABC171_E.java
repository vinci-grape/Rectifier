import java.util.*;

public class atcoder_ABC171_E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int total = 0;
        for(int a0 = 0; a0 < n; a0++){
            total = total ^ a[a0];
        }
        System.out.println(Arrays.toString(a).replaceAll("\\[|\\]|\\s+", "").replaceAll(",", ""));
        System.out.println(total);
    }
}