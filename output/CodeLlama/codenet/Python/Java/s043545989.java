import java.util.*;
import java.lang.*;
import java.io.*;

public class s043545989 {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int[] a = new int[N];
		for(int i=0;i<N;i++)
			a[i] = sc.nextInt();
		HashMap<Integer,Integer> B = new HashMap<Integer,Integer>();
		for(int i=0;i<N;i++)
			B.put(a[i],B.getOrDefault(a[i],0)+1);
		int[] k = new int[B.size()];
		int[] v = new int[B.size()];
		int i=0;
		for(Map.Entry<Integer,Integer> entry:B.entrySet())
		{
			k[i] = entry.getKey();
			v[i] = entry.getValue();
			i++;
		}
		if(B.size() == 3 && k[0]^k[1]^k[2] == 0 && v[0] == v[1] == v[2])
			System.out.println("Yes");
		else if(B.size() == 2 && 0 in k && (v[0] == 2*v[1] || v[1] == 2*v[0]))
			System.out.println("Yes");
		else if(B.size() == 1 && 0 in k)
			System.out.println("Yes");
		else
			System.out.println("No");
	}
}
