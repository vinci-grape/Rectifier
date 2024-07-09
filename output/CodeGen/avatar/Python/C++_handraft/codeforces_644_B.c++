#include <iostream>
#include <queue>
using namespace std;

class Task {
public:
    int time;
    int duration;
    int index;
    Task(int time, int duration, int index) : time(time), duration(duration), index(index) {}
};

int main() {
    int n, b;
    cin >> n >> b;
    queue<Task> remaining;
    int finish_time = 0;
    bool running = false;
    int result[n];
    for (int i = 0; i < n; ++i) {
        int time, duration;
        cin >> time >> duration;
        Task task(time, duration, i);
        remaining.push(task);
        if (task.time > finish_time && remaining.size() < b) {
            running = true;
            finish_time = task.time + task.duration;
            result[i] = finish_time;
        } else {
            if (task.time >= finish_time && remaining.size() > 0) {
                finish_time = finish_time + task.duration;
                result[i] = finish_time;
            }
            if (remaining.size() < b) {
                remaining.push(task);
            }
        }
    }
    while (remaining.size() > 0) {
        finish_time = finish_time + remaining.front().duration;
        result[remaining.front().index] = finish_time;
        remaining.pop();
    }
    for (int i = 0; i < n; ++i) {
        cout << result[i] << endl;
    }
    return 0;
}