import java.util.*;
import java.lang.*;
import java.io.*;

public class s990022717
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int x=sc.nextInt();
		int y=sc.nextInt();
		int sum=0;
		for(int i=1;i<=n;i++){
			if(i>k)sum+=y;
			else sum+=x;
		}
		System.out.println(sum);
	}
}