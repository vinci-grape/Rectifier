Input Format

The first line contains two integers A and B separated by a single space.
The second line contains the string S.
The string S contains A characters.
The string S contains exactly one occurrence of the character '-'.

Output Format

Print Yes if the string S contains exactly one occurrence of the character '-', and No otherwise.

Sample Input

2
-
-
Sample Output

Yes
Explanation

The string S contains exactly one occurrence of the character '-'.


import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        String S = sc.next();
        if (S.charAt(A) == '-' && S.count('-') == 1) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}