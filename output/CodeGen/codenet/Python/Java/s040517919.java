import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		if (A == B) {
			System.out.println("Draw");
		}
		else if (A == 1) {
			System.out.println("Alice");
		}
		else if (B == 1) {
			System.out.println("Bob");
		}
		else if (A > B) {
			System.out.println("Alice");
		}
		else {
			System.out.println("Bob");
		}
	}
}