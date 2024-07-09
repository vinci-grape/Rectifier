#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int s = A[0] ^ A[1];
    for (int i = 2; i < N; i++) {
        s = s ^ A[i];
    }

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        B[i] = s ^ A[i];
    }

    stringstream ss;
    for (int i = 0; i < N; i++) {
        ss << B[i] << " ";
    }
    string L = ss.str();
    L = L.substr(0, L.length() - 1);
    cout << L << endl;


    return 0;
}