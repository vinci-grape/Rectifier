class Main:
	def main(self):
		n = int(input())
		l = [int(input()) for i in range(n)]
		r = [int(input()) for i in range(n)]
		sum = 0
		for i in range(n):
			sum += r[i] - l[i] + 1
		print(sum)

Input Format:

The first line contains an integer, n, denoting the number of elements in the array.
The second line contains n space-separated integers describing the left and right endpoints of the array.

Output Format:

Print the sum of the elements in the array.

Sample Input:

3
1 2 3
2 3 4
3 4 5
Sample Output:

10
Explanation:

The array is 1 2 3 and the sum of its elements is 6.


import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] l = new int[n];
		int[] r = new int[n];
		for (int i=0; i<n; i++){
			l[i] = sc.nextInt();
			r[i] = sc.nextInt();
		}
		int sum = 0;
		for (int i=0; i<n; i++){
			sum += r[i] - l[i] + 1;
		}
		System.out.println(sum);
	}
}