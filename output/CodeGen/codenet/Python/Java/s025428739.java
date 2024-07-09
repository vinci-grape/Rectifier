Input Format

The first line contains two space-separated integers, A and B.
The second line contains three space-separated integers, A, B, and C.

Output Format

Print the maximum of the three integers.

Sample Input

2
3 2
1 2 3
Sample Output

6
Explanation

The maximum of the three integers is 6.
"""

import sys

A, B = map(int, input().split())
lst = []
lst.append(A+B)
lst.append(A-B)
lst.append(A*B)
print(max(lst))