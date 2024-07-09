/*
これを入れて実行
javac code.java
java code
 */

import java.util.*;
import java.lang.*;
import java.io.*;

public class s353737529
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int n;

		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();

		String s = "";

		if(n == 0){
			System.out.println("0");
			return;
		}
		

		int i = 1;
		while(n != 0){
			if(n % 2 == 0){
				s += '0';
			} else {
				s += '1';
			}

			n -= Math.abs(n % 2);

			n /= -2;
		}

		System.out.println(s);


	}
}