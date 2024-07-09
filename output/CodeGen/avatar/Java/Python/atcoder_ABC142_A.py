def main():
    try:
        br = BufferedReader(InputStreamReader(System.in))
        input = float(br.readline())
        countOdd = round(input/2)
        result = countOdd/input
        result = round(result, 10)
        print(result)
    except IOError as e:
        print(e)
        sys.exit(0)
    except Exception as e:
        print(e)
        sys.exit(0)



Input Format

A single positive integer denoting the number of test cases.

Output Format

For each test case, print the result of the program.

Sample Input

1
10
Sample Output

0.5

Explanation

The number of odd numbers in the range [0, 10) is 5.
"""