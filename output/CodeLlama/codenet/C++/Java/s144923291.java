import java.util.*;
import java.lang.*;
import java.io.*;

public class s144923291
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int h=sc.nextInt();
		int w=sc.nextInt();
		String t[]=new String[h];
		String s="snuke";
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				t[i]=sc.next();
				if(t[i].equals(s)){
					char c='A'+j;
					System.out.println(c+(i+1));
					return;
				}
			}
		}
	}
}