import java.util.*;
import java.lang.*;
import java.math.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int k = in.nextInt();
		int[] a = new int[n];
		for(int a_i=0; a_i < n; a_i++){
			a[a_i] = in.nextInt();
		}
		int[] b = new int[n];
		for(int b_i=0; b_i < n; b_i++){
			b[b_i] = in.nextInt();
		}
		int[] c = new int[n];
		for(int c_i=0; c_i < n; c_i++){
			c[c_i] = in.nextInt();
		}
		int[] d = new int[n];
		for(int d_i=0; d_i < n; d_i++){
			d[d_i] = in.nextInt();
		}
		int[] e = new int[n];
		for(int e_i=0; e_i < n; e_i++){
			e[