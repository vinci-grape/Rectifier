import java.util.*;
import java.lang.*;
import java.io.*;
public class s575944217
 {
	public static void main (String[] args)
	 {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] ans=new int[n];
		for(int i=0;i<n-1;i++){
		    int a=sc.nextInt();
		    a--;
		    ans[a]++;
		}
		for(int i=0;i<n;i++) System.out.println(ans[i]);
	 }
}