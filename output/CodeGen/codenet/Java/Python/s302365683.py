import java.util.*;
import java.io.*;




def main(args):
    br = java.io.BufferedReader(java.io.InputStreamReader(System.in))
    pw = java.io.PrintWriter(java.io.BufferedWriter(java.io.OutputStreamWriter(System.out)))
    s = java.util.StringTokenizer(br.readLine())
    n = int(s.nextToken())
    hm = {}
    for i in range(n):
        val = int(s.nextToken())
        hm[val] = hm.getOrDefault(val, 0) + 1
    for val in hm.keys():
        num = hm[val]
        if num > val:
            ans += num - val
        else:
            ans += num
    pw.println(ans)
    pw.close()

# Run the above program

main(sys.argv)