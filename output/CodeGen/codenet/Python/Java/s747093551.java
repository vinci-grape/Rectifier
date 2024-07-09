Input Format

The first line contains two integers N and M separated by a single space.
The second line contains N integers X[1],X[2],...,X[N] separated by a single space.
The third line contains M integers Y[1],Y[2],...,Y[M] separated by a single space.

Output Format

Output 'No War' if the maximum of the maximum of the elements of X is less than the minimum of the elements of Y, else output 'War'.

Sample Input

2 2
1 2
2 1
Sample Output

No War
Explanation

The maximum of the maximum of the elements of X is 2, and the minimum of the elements of Y is 1. So, there is no war.


import java.util.*;
import java.lang.*;
import java.io.*;

class GFG
{
	public static void main (String[] args)
	{
		//code
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		int M=sc.nextInt();
		int[] x=new int[N];
		int[] y=new int[M];
		for(int i=0;i<N;i++)
		{
			x[i]=sc.nextInt();
		}
		for(int i=0;i<M;i++)
		{
			y[i]=sc.nextInt();
		}
		int maxx=0;
		int miny=0;
		for(int i=0;i<N;i++)
		{
			if(maxx<x[i])
			{
				maxx=x[i];
			}
		}
		for(int i=0;i<M;i++)
		{
			if(miny>y[i])
			{
				miny=y[i];
			}
		}
		if(maxx<miny)
		{
			System.out.println("No War");
		}
		else
		{
			System.out.println("War");
		}
	}
}