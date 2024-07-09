def main():
    sc = Scanner(sys.stdin)
    a = sc.next()
    b = sc.next()
    bChar = b.toCharArray()
    length = len(bChar)
    bStr = ""
    for i in range(length):
        if bChar[i]!= '.':
            bStr += bChar[i]
    bInt = int(bStr)
    result = (a * bInt) / 100
    print(result)



Input Format:

The first line contains an integer, a.
The second line contains a string, b.

Constraints:

1 <= a <= 100
1 <= len(b) <= 100
b contains only the characters '.' and '0' to '9'.

Output Format:

Output a single integer, the result.

Sample Input:

3
2.2
2.2

Sample Output:

2

Explanation:

The first input is a = 3, b = 2.2.
The second input is a = 3, b = 2.2.
The third input is a = 3, b = 2.2.
The output is 2.


import java.util.*;
import java.io.*;

public class atcoder_ABC169_C {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
		long a = sc.nextLong();
		String b = sc.next();
		char[] bChar = b.toCharArray();
		int length = bChar.length;
		String bStr = "";
		for(int i = 0; i < length; i++) {
			if(bChar[i]!= '.') {
				bStr += bChar[i];
			}
		}
		int bInt = Integer.parseInt(bStr);
		long result = (a * bInt) / 100;
		System.out.println(result);
	}
}