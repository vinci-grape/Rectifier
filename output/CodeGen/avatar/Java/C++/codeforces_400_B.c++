#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int length[n];
    int index = 0;
    int returnDex = 0;
    for (int i = 0; i < n; i++) {
        int dexG = arr[i].find("G");
        int dexS = arr[i].find("S");
        if (dexG > dexS) {
            returnDex = -1;
        }
        length[index++] = dexS - dexG;
    }
    sort(length, length + n);
    HashSet set;
    for (int len : length) {
        set.insert(len);
    }
    if (returnDex == -1) {
        cout << returnDex << endl;
    } else {
        cout << set.size() << endl;
    }
    return 0;
}