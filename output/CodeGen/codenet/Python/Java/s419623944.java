Input Format:

The first line contains an integer, N, denoting the number of test cases.
The next N lines contain two integers, R and N, where R is the number of rows and N is the number of columns.
The next line contains N integers, A1, A2,..., AN, where Ai is the ith element of the array.

Output Format:

For each test case, print the minimum number of rows required to make the array square.

Sample Input:

2
3 3
1 2 3
4 4
1 2 3 4
Sample Output:

2
3
Explanation:

In the first case, we need to make the array square by adding two rows.
In the second case, we need to make the array square by adding three rows.


import java.util.Scanner;

public class s419623944 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int r = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int min = r;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]*a[j]==0){
                    min = Math.min(min, r);
                }
            }
        }
        System.out.println(min);
    }
}