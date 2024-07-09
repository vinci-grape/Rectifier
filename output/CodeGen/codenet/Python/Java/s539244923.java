Input Format

The first line contains two integers, n and k, separated by a space.
The second line contains n space-separated integers.

Output Format

Print the sum of the first k integers in the array.

Sample Input

4 2
1 2 3 4
Sample Output

6
Explanation

The first 2 numbers are 1 and 2.
The sum of the first 2 numbers is 1+2 = 3.
The third number is 3.
The sum of the first 3 numbers is 3+4 = 7.
The fourth number is 4.
The sum of the first 4 numbers is 1+2+3+4 = 10.


import java.util.Scanner;

public class s539244923 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = in.nextInt();
        }
        int sum = 0;
        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        System.out.println(sum);
    }
}