Input Format:

The first line contains two space-separated integers, a and b.
The second line contains three space-separated integers, a, b, and c.

Output Format:

Print the maximum value of the list lst.

Sample Input:

2 4
2 3
Sample Output:

6
Explanation:

lst = [4, 2, 3]
The maximum value is 6.


import java.util.Scanner;

public class s091400419 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        int[] lst = {a + b, a - b, a * b};
        int max = lst[0];
        for (int i = 1; i < lst.length; i++) {
            if (lst[i] > max) {
                max = lst[i];
            }
        }
        System.out.println(max);
    }
}