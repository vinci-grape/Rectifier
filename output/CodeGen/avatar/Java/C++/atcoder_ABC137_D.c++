#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

class Job {
public:
    int a;
    int b;
    Job(int a, int b) : a(a), b(b) {}
    bool operator<(const Job& other) const {
        if (a == other.a) return b < other.b;
        return a < other.a;
    }
};

class atcoder_ABC137_D {
public:
    int main() {
        int N, M;
        cin >> N >> M;
        priority_queue<Job, vector<Job>, greater<Job>> q;
        for (int i = 0; i < N; ++i) {
            int a, b;
            cin >> a >> b;
            q.push(Job(a, b));
        }
        int cnt = 0;
        priority_queue<int, vector<int>, greater<int>> jobQ;
        for (int i = 1; i <= M; ++i) {
            while (!q.empty() && q.top().a <= i) {
                jobQ.push(q.top().b);
                q.pop();
            }
            if (!jobQ.empty()) cnt += jobQ.top();
            jobQ.pop();
        }
        cout << cnt;
        return 0;
    }
};