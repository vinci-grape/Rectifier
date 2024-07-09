#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> FfriendPerDay(367, 0);
    vector<int> MfriendPerDay(367, 0);
    int answer = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            if (c == 'M')
                MfriendPerDay[j]++;
            else
                FfriendPerDay[j]++;
            if (MfriendPerDay[j] < FfriendPerDay[j]) {
                if (MfriendPerDay[j] > answer)
                    answer = MfriendPerDay[j];
            } else {
                if (FfriendPerDay[j] > answer)
                    answer = FfriendPerDay[j];
            }
        }
    }
    cout << answer * 2 << endl;
}