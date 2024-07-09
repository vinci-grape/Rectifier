#include <iostream>
#include <queue>
#include <map>

using namespace std;

struct Task {
    int time;
    int duration;
    int index;
};

int main() {
    int n, b;
    cin >> n >> b;

    queue<Task> remaining;
    bool running = false;
    int finish_time = 0;
    map<int, int> result;

    for (int i = 0; i < n; i++) {
        int time, duration;
        cin >> time >> duration;

        Task task;
        task.time = time;
        task.duration = duration;
        task.index = i;

        result[i] = 0;

        if (task.time > finish_time && remaining.empty()) {
            running = true;
            finish_time = task.time + task.duration;
            result[i] = finish_time;
        } else {
            if (task.time >= finish_time && !remaining.empty()) {
                // Run task
                Task task_to_run = remaining.front();
                remaining.pop();
                finish_time = max(finish_time, task_to_run.time) + task_to_run.duration;
                result[task_to_run.index] = finish_time;
            }

            if (remaining.size() < b) {
                remaining.push(task);
            } else {
                result[i] = -1;
            }
        }
    }

    while (!remaining.empty()) {
        // Run task
        Task task_to_run = remaining.front();
        remaining.pop();
        finish_time = max(finish_time, task_to_run.time) + task_to_run.duration;
        result[task_to_run.index] = finish_time;
    }

    for (auto const& pair : result) {
        cout << pair.second << endl;
    }

    return 0;
}