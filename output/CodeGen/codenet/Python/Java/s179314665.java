import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
	public static void main (String[] args) {
		Scanner in = new Scanner(System.in);
		int A, B;
		A = in.nextInt();
		B = in.nextInt();
		if (A < 10 && B < 10) {
			System.out.println(A*B);
		} else {
			System.out.println(-1);
		}
	}
}