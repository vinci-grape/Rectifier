#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

struct Job {
    int a;
    int b;
    Job(int a, int b) {
        this->a = a;
        this->b = b;
    }
    bool operator<(const Job& otherJob) const {
        if (otherJob.a == this->a) return this->b > otherJob.b;
        else return this->a > otherJob.a;
    }
};

int main() {
    int N, M;
    cin >> N >> M;
    priority_queue<Job> q;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        q.push(Job(a, b));
    }
    int cnt = 0;
    priority_queue<int, vector<int>, greater<int>> jobQ;
    for (int i = 1; i <= M; i++) {
        while (!q.empty()) {
            Job job = q.top();
            if (job.a <= i) {
                jobQ.push(job.b);
                q.pop();
            } else {
                break;
            }
        }
        if (!jobQ.empty()) {
            cnt += jobQ.top();
            jobQ.pop();
        }
    }
    cout << cnt << endl;
    return 0;
}