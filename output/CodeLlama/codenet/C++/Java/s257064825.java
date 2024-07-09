import java.util.*;
import java.lang.*;
import java.io.*;
public class s257064825
 {
	public static void main (String[] args)
	 {
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		int sum=0;
		for(int i=0;i<str.length();i++)
		{
			sum+=str.charAt(i)-'0';
		}
		if(sum%9==0)
		{
			System.out.println("Yes");
		}
		else
		{
			System.out.println("No");
		}
	 }
}