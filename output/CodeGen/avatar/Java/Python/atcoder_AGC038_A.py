def main():
    sc = Scanner()
    bw = BufferedWriter(OutputStreamWriter(sys.stdout))
    H, W = sc.nextInt(), sc.nextInt()
    A, B = sc.nextInt(), sc.nextInt()
    if W < 2 * A or H < 2 * B:
        print(-1)
        return
    for i in range(H):
        for j in range(W):
            if (i < B and j < A) or (i >= B) and (j >= A):
                bw.write('0')
            else:
                bw.write('1')
            bw.newLine()
    bw.flush()



Input Format:

The first line contains two space-separated integers denoting the height and width of the input matrix.
The second line contains two space-separated integers denoting the height and width of the area to be filled with 1s.
The third line contains two space-separated integers denoting the height and width of the area to be filled with 0s.

Output Format:

Output a single line containing the filled matrix.

Sample Input:

3 3 2 2
2 2 2 2
2 2 2 2
2 2 2 2
Sample Output:

11111
11111
11111
11111
Explanation:

The area to be filled with 1s is marked in the diagram.
The area to be filled with 0s is marked in bold.

"""