#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cassert>
#include <ctime>
#include <cstdint>
using namespace std;

class Main {
public:
    Main(FastScanner in, PrintWriter out, int test) {
        int N = in.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++)
            A[i] = in.nextInt();
        sort(A, A + N);

        long res = 0;

        priority_queue<int, vector<int>, greater<int>> q;
        q.push(A[N - 1]);

        for (int i = N - 2; i >= 0; i--) {
            int a = A[i];
            int place = q.top();
            res += min(place, a);
            q.pop();
            q.push(a);
            q.push(place);
        }
        out.println(res);
    }
};

int main() {
    int T = 0;
    FastScanner in = new FastScanner(System.in);
    PrintWriter out = new PrintWriter(System.out);
    // Scanner in = new Scanner(
            // new BufferedReader(new InputStreamReader(System.in)));
    // int T = in.nextInt();
    for (int t = 0; t < T; t++) {
        Main sol = new Main(in, out, t);
    }
    out.close();
    return 0;
}