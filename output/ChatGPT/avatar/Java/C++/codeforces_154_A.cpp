#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string arr;
    getline(cin, arr);
    int N = arr.length();
    unordered_set<string> set;
    int K;
    cin >> K;
    int res = 0;
    for (int k = 0; k < K; k++) {
        string input;
        cin >> input;
        int a = 0;
        int b = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] == input[0])
                a++;
            else if (arr[i] == input[1])
                b++;
            else {
                res += min(a, b);
                a = b = 0;
            }
        }
        res += min(a, b);
    }
    cout << res << endl;
    return 0;
}