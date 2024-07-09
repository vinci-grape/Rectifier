#include <bits/stdc++.h>
using namespace std;
class Task {
public:
    int time, duration, index;
    Task(int time, int duration, int index) {
        this->time = time;
        this->duration = duration;
        this->index = index;
    }
};
int main() {
    int n, b;
    cin >> n >> b;
    queue<Task> remaining;
    bool running = false;
    int finish_time = 0;
    vector<int> result(n, 0);
    function<pair<int, vector<int>>(queue<Task>&, int)> run_task = [&](queue<Task>& remaining, int finish_time) {
        Task task_to_run = remaining.front();
        finish_time = max(finish_time, task_to_run.time) + task_to_run.duration;
        result[task_to_run.index] = finish_time;
        return make_pair(finish_time, result);
    };
    for (int i = 0; i < n; i++) {
        int time, duration;
        cin >> time >> duration;
        Task task(time, duration, i);
        result[i] = 0;
        if (task.time > finish_time && remaining.empty()) {
            running = true;
            finish_time = task.time + task.duration;
            result[i] = finish_time;
        } else {
            if (task.time >= finish_time && !remaining.empty()) {
                finish_time = run_task(remaining, finish_time).first;
            }
            if (remaining.size() < b) {
                remaining.push(task);
            } else {
                result[i] = -1;
            }
        }
    }
    while (!remaining.empty()) {
        finish_time = run_task(remaining, finish_time).first;
    }
    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }
    return 0;
}