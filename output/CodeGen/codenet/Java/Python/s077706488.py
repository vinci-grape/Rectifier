import java.util.Scanner;

def main():
    N = int(input())
    X = int(input())
    m = [int(input()) for _ in range(N)]
    X -= m[0]
    min = m[0]
    for i in range(1, N):
        m[i] = int(input())
        X -= m[i]
        if m[i] < min:
            min = m[i]
    print(N + X / min)

Input Format

The first line contains an integer, N, the number of elements in the array.
The second line contains an integer, X, the value of the array.
The third line contains N space-separated integers, the elements of the array.

Output Format

Print the number of elements in the array that are less than or equal to X.

Sample Input

5
10
1 2 3 4 5
Sample Output

3
Explanation

The array is {1, 2, 3, 4, 5}.
The value of X is 10.
The number of elements in the array that are less than or equal to 10 is 3.
"""