#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool ju[100001];
    int pe[100001];
    int wa = 0, ac = 0;
    for (int i = 0; i < b; i++) {
        int n;
        string res;
        cin >> n >> res;
        if (res == "WA" && !ju[n - 1]) {
            pe[n - 1]++;
        }
        if (res == "AC") {
            ju[n - 1] = true;
        }
    }
    for (int i = 0; i < a; i++) {
        if (ju[i]) {
            ac++;
            wa += pe[i];
        }
    }
    cout << ac << " " << wa;
    return 0;
}