import java.util.*;
import java.math.*;
import java.io.*;
import java.text.*;
import java.awt.Point;

import static java.lang.Math.*;

public class atcoder_AGC019_A {
	static final Scanner in = new Scanner(System.in);
	static final PrintWriter out = new PrintWriter(System.out);

	public static void main(String[] args) throws Exception {
		int n = in.nextInt();
		int[] q = new int[4];
		int[] h = new int[2];
		int[] s = new int[2];
		int[] d = new int[2];
		for (int i = 0; i < 4; i++) {
			q[i] = in.nextInt();
		}
		for (int i = 0; i < 2; i++) {
			h[i] = in.nextInt();
		}
		for (int i = 0; i < 2; i++) {
			s[i] = in.nextInt();
		}
		for (int i = 0; i < 2; i++) {
			d[i] = in.nextInt();
		}
		int best1L = Math.min(Math.min(min(q) * 4, min(h) * 2), min(s));
		int best2L = Math.min(min(d), best1L * 2);
		if (n % 2 == 0) {
			out.println(best2L * (n / 2) + best1L);
		} else {
			out.println(best2L * (n / 2) + best1L);
		}
	}

	public static int min(int[] arr) {
		int minVal = arr[0];
		for (int i = 1; i < arr.length; i++) {
			if (arr[i] < minVal) {
				minVal = arr[i];
			}
		}
		return minVal;
	}
}