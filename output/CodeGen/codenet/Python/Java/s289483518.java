Input Format

The first line contains two integers n and m (1 <= n, m <= 100) separated by a space.
The second line contains n space-separated integers a[1], a[2],..., a[n] (1 <= a[i] <= 100).
The third line contains m space-separated integers b[1], b[2],..., b[m] (1 <= b[i] <= 100).
The fourth line contains m space-separated integers c[1], c[2],..., c[m] (1 <= c[i] <= 100).

Output Format

Print a single integer which is the sum of the elements of a.

Sample Input

5 3
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
Sample Output

15
Explanation

The first line contains 5 and 3.
The second line contains 1, 2, 3, 4, and 5.
The third line contains 2, 3, 4, 5, and 6.
The fourth line contains 3, 4, 5, 6, and 7.
The fifth line contains 4, 5, 6, 7, and 8.
The sum of the elements of the first line is 1 + 2 + 3 + 4 + 5 = 15.
"""


import sys

n, m = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
ope = [list(map(int, input().split())) for _ in range(m)]
ope = sorted(ope, key=lambda x: x[1], reverse=True)
j = 0
for i in range(n):
    if a[i] < ope[j][1]:
        a[i] = ope[j][1]
        ope[j][0] -= 1
        if ope[j][0] == 0:
            j += 1
            if j == len(ope):
                break
    else:
        break
print(sum(a))