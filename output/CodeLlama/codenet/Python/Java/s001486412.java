import java.util.*;
public class s001486412 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
            a[i] = sc.nextInt();
        double below = 0;
        for(int i=0;i<n;i++)
            below += 1/a[i];
        System.out.println(1/below);
    }
}