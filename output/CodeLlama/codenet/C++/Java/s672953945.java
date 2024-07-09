import java.util.*;
import java.lang.*;
import java.io.*;

public class s672953945
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int N,L;
		N = sc.nextInt();
		L = sc.nextInt();
		String[] v = new String[N];
		for(int i=0;i<N;i++){
			v[i] = sc.next();
		}
		Arrays.sort(v);
		for(int i=0;i<v.length;i++){
			System.out.print(v[i]);
		}
		System.out.println();
	}
}