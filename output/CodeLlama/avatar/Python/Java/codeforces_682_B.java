import java.util.*;
import java.lang.*;
import java.io.*;
public class codeforces_682_B
{
    public static void main ( String[] args ) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] l = new int[n];
        int f = 1;
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            l[i] = sc.nextInt();
        }
        Arrays.sort(l);
        for(int i = 0; i < n; i++)
        {
            if(l[i] > c)
            {
                c++;
            }
        }
        System.out.println(c+1);
    }
}