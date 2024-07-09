import java.util.*;
public class s654970460 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0;i<n;i++)
        a[i] = sc.nextInt();
        System.out.print(a[n-1]);
        for(int i=1;i<n;i++)
        System.out.print(" "+a[n-i-1]);
    }
}