#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    string S, T;
    cin >> S >> T;
    
    string char_lists;
    
    for (int i = 0; i < N; i++) {
        char_lists += S[i];
        char_lists += T[i];
    }
    
    cout << char_lists << endl;
    
    return 0;
}