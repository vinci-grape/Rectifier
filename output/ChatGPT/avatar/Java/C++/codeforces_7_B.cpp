#include <iostream>
using namespace std;

int main() {
    int t, m;
    cin >> t >> m;
    int* memory = new int[m];
    int allocIdx = 0;
    for (int j = 0; j < t; j++) {
        string command;
        cin >> command;
        if (command == "alloc") {
            int n;
            cin >> n;
            int len = 0;
            bool canAlloc = false;
            for (int i = 0; i < m; i++) {
                if (memory[i] == 0)
                    len++;
                else
                    len = 0;
                if (len == n) {
                    canAlloc = true;
                    len = i - n + 1;
                    break;
                }
            }
            if (canAlloc) {
                allocIdx++;
                for (int i = len; i < len + n; i++)
                    memory[i] = allocIdx;
                cout << allocIdx << endl;
            } else
                cout << "NULL" << endl;
        } else if (command == "erase") {
            int x;
            cin >> x;
            if (x <= 0) {
                cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
                continue;
            }
            bool hasErased = false;
            for (int i = 0; i < m; i++) {
                if (memory[i] == x) {
                    memory[i] = 0;
                    hasErased = true;
                }
            }
            if (!hasErased)
                cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
        } else if (command == "defragment") {
            int d = 0;
            for (int i = 0; i < m; i++) {
                if (memory[i] == 0)
                    d++;
                else
                    memory[i - d] = memory[i];
            }
            for (int i = m - d; i < m; i++)
                memory[i] = 0;
        } else {
            cout << "h" << endl;
        }
    }
    delete[] memory;
    return 0;
}