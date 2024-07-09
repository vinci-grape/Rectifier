import java.util.*;
import java.io.*;
import java.math.*;
import java.util.Scanner;

public class codeforces_682_B {
	public static void main(String[] args) throws IOException {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] a = new int[n];
		for(int a_i=0; a_i < n; a_i++){
			a[a_i] = in.nextInt();
		}
		in.close();
		Arrays.sort(a);
		int c = 0;
		for(int i=0; i<n; i++){
			if(a[i] > c){
				c++;
			}
		}
		System.out.println(c+1);
	}
}