#include <bits/stdc++.h>
using namespace std;

class Solver {
private:
    const long long MOD = (long long)1e9 + 7;
    const int MAXN = 1000006;
    Helper hp;
    Timer timer;
    TimerTask task;
    
public:
    Solver() : hp(MOD, MAXN), timer(), task() {
        hp.initIO(cin, cout);
        timer.schedule(task, 4700);
    }
    
    void solve() {
        int tc = TESTCASES ? hp.nextInt() : 1;
        for (int tce = 1; tce <= tc; ++tce) solve(tce);
        timer.cancel();
        hp.flush();
    }
    
    void solve(int tc) {
        int i, j, k;
        
        int N = hp.nextInt();
        long long K = hp.nextLong();
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            A[i] = hp.nextInt();
        }
        
        vector<int> straight, cycle;
        vector<bool> vis(N);
        int curr = 0;
        while (!vis[curr]) {
            vis[curr] = true;
            curr = A[curr] - 1;
        }
        
        int st = 0;
        while (st != curr) {
            straight.push_back(st);
            st = A[st] - 1;
        }
        
        cycle.push_back(curr);
        curr = A[curr] - 1;
        while (curr != cycle[0]) {
            cycle.push_back(curr);
            curr = A[curr] - 1;
        }
        
        if (K < straight.size()) {
            hp.println(straight[K] + 1);
        } else {
            K -= straight.size();
            hp.println(cycle[K % cycle.size()] + 1);
        }
    }
};

int main() {
    Solver solver;
    solver.solve();
    return 0;
}