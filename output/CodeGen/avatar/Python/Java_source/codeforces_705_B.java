import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] w = new int[n];
		for(int w_i=0; w_i < n; w_i++){
			w[w_i] = in.nextInt();
		}
		int c = 2;
		for(int i=0; i < n; i++){
			if(w[i] == 1){
				c = 2;
			} else if(w[i] % 2 == 0){
				c = 3 - c;
			} else {
				c = 3 - c;
			}
			System.out.println(c);
		}
	}
}