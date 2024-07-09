class Main:
    def main(self):
        N = int(input())
        map = {}
        for i in range(1, N + 1):
            map[i] = int(input())
        print(str(sorted(map.items(), key=lambda x: x[1])).replace("'", ""))

Input Format

The first line contains an integer, N, denoting the number of elements in the map.
The second line contains N space-separated integers describing the map.

Output Format

Print the sorted keys of the map.

Sample Input

3
1 2 3
Sample Output

1 2 3
Explanation

The map is {1: 2, 2: 3}.

Sample Input

3
1 2 3
4 5 6
Sample Output

1 2 3 4 5 6
Explanation

The map is {1: 2, 2: 3, 3: 4, 4: 5, 5: 6}.
"""