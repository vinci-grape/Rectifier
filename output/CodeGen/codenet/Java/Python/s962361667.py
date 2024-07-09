import java.util.Scanner;

def main(args):
    sc = Scanner(System.in)
    w = sc.nextInt()
    n = sc.nextInt()
    values = [i + 1 for i in range(w)]
    for i in range(n):
        str = sc.next()
        ab = str.split(",")
        a = int(ab[0]) - 1
        b = int(ab[1]) - 1
        values[a], values[b] = values[b], values[a]
    for i in range(w):
        print(values[i])

Input Format

The first line contains an integer, w, denoting the number of elements in the array.
The second line contains an integer, n, denoting the number of operations.
The next n lines each contain two space-separated integers, a and b, denoting the position of the elements to be swapped.

Output Format

Output the elements of the array in the order in which they were swapped.

Sample Input

4
2
1 2
3 4
Sample Output

2 1 4 3
Explanation

We swap the elements at positions 1 and 2, so the array becomes [2, 1, 4, 3].

Note:

1 <= w <= 100
1 <= n <= 100
0 <= a, b < w
"""