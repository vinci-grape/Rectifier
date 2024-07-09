def main ( ):
    scan = input ( )
    a = int ( scan.next ( ) )
    b = int ( scan.next ( ) )
    res = a
    while a >= b:
        res += ( a / b )
        a = ( a / b ) + ( a % b )
    print ( res )



Input Format

The first line contains an integer,, denoting the number of test cases.
The next  lines contain two integers,, denoting the respective values of a and b.

Output Format

For each test case, print the value of the function on a new line.

Sample Input

2
1 2
3 4
Sample Output

2
3
Explanation

For the first test case, the input is 1 2, and the output is 2.
For the second test case, the input is 3 4, and the output is 3.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        int res = a;
        while(a >= b) {
            res += (a/b);
            a = (a/b) + (a%b);
        }
        cout << res << endl;
    }
    return 0;
}