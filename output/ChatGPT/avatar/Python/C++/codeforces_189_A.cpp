#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void cutRibbon() {
    vector<int> arr;
    string input;
    getline(cin, input);
    size_t pos = 0;
    while ((pos = input.find(" ")) != string::npos) {
        arr.push_back(stoi(input.substr(0, pos)));
        input.erase(0, pos + 1);
    }
    arr.push_back(stoi(input));

    int length = arr[0];
    sort(arr.begin() + 1, arr.begin() + 4);

    if (length % arr[1] == 0) {
        cout << length / arr[1] << endl;
        return;
    }

    int ans = 0;
    if (arr[1] == arr[2]) {
        int k = 0;
        for (int i = 0; i <= length / arr[3]; i++) {
            int check = length - i * arr[3];
            if (check >= 0 && check % arr[1] == 0) {
                k = check / arr[1];
                ans = max(ans, k + i);
            }
        }
    } else {
        int k = 0;
        for (int i = 0; i <= length / arr[3]; i++) {
            for (int j = 0; j <= length / arr[2]; j++) {
                int check = length - i * arr[3] - j * arr[2];
                if (check >= 0 && check % arr[1] == 0) {
                    k = check / arr[1];
                    ans = max(ans, k + i + j);
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {
    cutRibbon();
    return 0;
}