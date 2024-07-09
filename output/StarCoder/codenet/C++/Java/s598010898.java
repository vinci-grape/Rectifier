import java.util.*;
public class s598010898 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, a[] = new int[100], b[] = new int[100], sum = 0;
        n = in.nextInt();
        for(int i=0;i<n;i++) a[i] = in.nextInt();
        for(int i=0;i<n;i++) {
            b[i] = in.nextInt();
            if(a[i]-b[i]>0) sum += a[i]-b[i];
        }
        System.out.println(sum);
    }
}