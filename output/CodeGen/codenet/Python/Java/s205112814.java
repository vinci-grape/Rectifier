Input Format

The first line contains two integers, n and m, separated by a space.
The second line contains m space-separated integers, each of which is a gate condition.
The gate condition is a list of two integers, l[0] and l[1], separated by a space.
l[0] is the lower bound of the gate, and l[1] is the upper bound of the gate.

Output Format

Print the minimum number of gates that must be opened to make the circuit work.
If the circuit can be opened with no gates, print 0.

Sample Input

5 3
1 2
2 3
3 4
4 5
Sample Output

2
Explanation

The circuit can be opened with 2 gates:

1. Open the gate with index 1.
2. Open the gate with index 2.

The circuit can be opened with no gates.
"""

import sys

def main():
    n, m = map(int, input().split())
    gate_cond = [[int(x) for x in input().split()] for _ in range(m)]
    max_under_th = max([l[0] for l in gate_cond])
    min_upper_th = min([l[1] for l in gate_cond])
    if min_upper_th - max_under_th >= 0:
        print(min_upper_th - max_under_th + 1)
    else:
        print(0)

if __name__ == '__main__':
    main()