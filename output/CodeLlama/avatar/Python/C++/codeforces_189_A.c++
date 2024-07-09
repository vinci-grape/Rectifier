#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int length, arr[4];
    cin >> length;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    if (length % arr[0] == 0) {
        cout << length / arr[0];
        return 0;
    }
    int ans = 0;
    if (arr[0] == arr[1]) {
        for (int i = 0; i <= length / arr[2]; i++) {
            int check = length - i * arr[2];
            if (check >= 0 && check % arr[0] == 0) {
                ans = max(ans, check / arr[0] + i);
            }
        }
    } else {
        for (int i = 0; i <= length / arr[2]; i++) {
            for (int j = 0; j <= length / arr[1]; j++) {
                int check = length - i * arr[2] - j * arr[1];
                if (check >= 0 && check % arr[0] == 0) {
                    ans = max(ans, check / arr[0] + i + j);
                }
            }
        }
    }
    cout << ans;
    return 0;
}