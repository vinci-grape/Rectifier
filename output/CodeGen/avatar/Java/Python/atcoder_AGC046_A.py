class atcoder_AGC046_A {
    def main(args):
        sc = FastReader()
        pw = PrintWriter(sys.stdout)
        x = sc.nextInt()
        count = 0
        tmp = x
        x = 0
        while x!= 360:
            x = x + tmp
            if x > 360:
                x = x - 360
            count += 1
        pw.println(count)


class FastReader {
    def __init__(self):
        self.br = BufferedReader(InputStreamReader(sys.stdin))
    def next(self):
        while True:
            try:
                return self.br.readline()[:-1]
            except IOError as e:
                if e.errno!= errno.EINTR:
                    raise
    def nextInt(self):
        return int(next(self))
    def nextLong(self):
        return long(next(self))
    def nextDouble(self):
        return float(next(self))
    def nextLine(self):
        return next(self).strip()
}



Input Format

The first line contains an integer,, denoting the number of test cases.
The  subsequent lines contain a single integer,, denoting the number of degrees in the circle.
The  subsequent lines contain two integers,, and, denoting the latitude and longitude of the center of the circle, respectively.

Output Format

For each test case, output one line containing the number of degrees in the circle.

Sample Input

2
1
1 2 0
2
2 0 1
Sample Output

3
0
Explanation

The center of the circle is at (1, 2) and the radius is 1.
The circle contains 3 degrees.


#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int ans = 0;
        for (int j = 0; j < n; j++) {
            int x = a[j];
            int y = a[(j + 1) % n];
            int r = sqrt(x * x + y * y);
            if (r == 0) {
                ans++;
            } else {
                int d = acos((x / r) * (x / r) + (y / r) * (y / r)) * 180 / 3.1415926;
                if (d > 360) {
                    d = d - 360;
                }
                ans += d;
            }
        }
        cout << ans << endl;
    }
    return 0;
}