import java.util.*;
public class s704354119 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] l = new String[n];
        int max = -1e9,min = 1e9,sum = 0;
        for(int i=0;i<n;i++)
        {
            l[i] = sc.next();
            sum+=Integer.parseInt(l[i]);
            if(max<Integer.parseInt(l[i]))
                max = Integer.parseInt(l[i]);
            if(min>Integer.parseInt(l[i]))
                min = Integer.parseInt(l[i]);
        }
        System.out.println(min+" "+max+" "+sum);
    }
}