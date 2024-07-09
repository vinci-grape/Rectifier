def main():
    sc = Scanner(System.in)
    #n = sc.nextInt()
    s = sc.next()
    n = int(s.strip()[-1])
    if n == 3:
        print("bon")
    elif n == 0 or n == 1 or n == 6 or n == 8:
        print("pon")
    else:
        print("hon")
    sc.close()

If you run your code on the Python interpreter, it should print out the same
value as the Java code.

Input Format

The first line contains an integer, n, denoting the number of test cases.
The n subsequent lines each contain a string, s, denoting a string of length
at most 100 characters.

Output Format

For each test case, output "bon" if the string is a palindrome, "pon" if it is
a mirror, and "hon" if it is neither.

Sample Input

2
abcd
abcd
Sample Output

bon
pon
Explanation

The string "abcd" is a palindrome.
The string "abcd" is a mirror.
The string "abcd" is neither a palindrome nor a mirror.