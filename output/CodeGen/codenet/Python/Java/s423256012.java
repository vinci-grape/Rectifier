Input Format:

The first line contains two space-separated integers denoting the respective values of A and B.
The second line contains two space-separated integers denoting the respective values of A and B.

Output Format:

Print the value of (A+B)//2 if possible. If not possible, print IMPOSSIBLE.

Sample Input:

5 6
5 6
Sample Output:

3
Explanation:

5 + 6 = 11, which is odd. Hence, (5 + 6)//2 = 3.


import java.util.Scanner;

public class s423256012 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        if ((a + b) % 2 == 1) {
            System.out.println("IMPOSSIBLE");
        } else {
            System.out.println((a + b) / 2);
        }
    }
}