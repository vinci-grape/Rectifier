import java.util.* ; import java.io.* ; import java.math.* ; class codeforces_154_A { def main ( self, hi ) : input = raw_input ( ) ; arr = input.readline ( ).toCharArray ( ) ; N = len ( arr ) ; K = int ( raw_input ( ) ) ; res = 0 ; for k in xrange ( K ) : input = raw_input ( ) ; a = 0 ; b = 0 ; for i in xrange ( N ) : if arr [ i ] == input.charAt ( 0 ) : a += 1 ; else : if arr [ i ] == input.charAt ( 1 ) : b += 1 ; else : res += min ( a, b ) ; a = b = 0 ; res += min ( a, b ) ; print res ;
} }



Input Format:

The first line contains the number of test cases, T. T test cases follow. Each test case consists of two lines. The first line contains the length of the string, N. The second line contains the string, S.

Output Format:

For each test case, print the minimum number of moves required to change all the characters of string S to the corresponding characters of string T.

Sample Input:

2
3
abc
def
Sample Output:

1
0
Explanation:

We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.

Sample Input:

2
3
abd
def
Sample Output:

2
0
Explanation:

We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of string S to the third character of string T.
We need to change the first character of string S to the first character of string T.
We need to change the second character of string S to the second character of string T.
We need to change the third character of