#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> lista(a);
    for (int i = 0; i < a; i++) {
        cin >> lista[i];
    }

    vector<int> listb(b);
    for (int i = 0; i < b; i++) {
        cin >> listb[i];
    }

    for (int k = 0; k < n; k++) {
        if (find(lista.begin(), lista.end(), k + 1) != lista.end()) {
            cout << 1 << " ";
        } else {
            cout << 2 << " ";
        }
    }


    return 0;
}