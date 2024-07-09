#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int* map = new int[N * 2];
    for (int i = 0; i < N * 2; i++) {
        cin >> map[i];
    }
    
    sort(map, map + (N * 2));
    
    int max = 0;
    for (int i = 0; i < N * 2; i += 2) {
        max += min(map[i], map[i + 1]);
    }
    
    cout << max << endl;
    
    delete[] map;
    
    return 0;
}