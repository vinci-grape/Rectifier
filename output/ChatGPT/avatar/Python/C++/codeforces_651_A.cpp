#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    cout << max(x + y - 3 + ((y - x) % 3 > 0), 0) << endl;

    int num_inp() {
        int num;
        cin >> num;
        return num;
    }

    vector<int> arr_inp() {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        return arr;
    }

    pair<int, int> sp_inp() {
        int x, y;
        cin >> x >> y;
        return make_pair(x, y);
    }

    string str_inp() {
        string str;
        cin >> str;
        return str;
    }

    return 0;
}