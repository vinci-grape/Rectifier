Input Format

The first line contains an integer, T, the number of test cases.
The T subsequent lines each contain two integers, a and b, separated by a space.

Output Format

For each test case, output Yes if a % b <= b, and No otherwise.

Sample Input

2
1 2
2 3
Sample Output

Yes
No
Explanation

In the first case, 1 % 2 <= 2, so the output is Yes.
In the second case, 2 % 3 > 3, so the output is No.


import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T-- > 0) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println(a % b <= b? "Yes" : "No");
		}
	}
}