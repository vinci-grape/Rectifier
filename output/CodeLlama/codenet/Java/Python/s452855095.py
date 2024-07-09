#package Contest081;

import java.io.PrintWriter;
import java.util.Scanner;

public class Main {
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);
            int n = sc.nextInt();
            int arr []=new int [n];
            for(int i=0;i<n;i++)
                arr[i]=sc.nextInt();
            int cnt =0;
            boolean flag = true;
            while(true)
            {
                for(int i=0;i<n;i++)
                {
                    if(arr[i]%2!=0)
                    {
                        flag = false;
                        break;
                    }
                    else
                        arr[i] = arr[i]/2;
                }
                if(flag==true)
                    cnt++;
                else
                    break;
            }
                out.println(cnt);
        out.flush();
    }
}