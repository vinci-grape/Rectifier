#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    
    vector<int> aji;
    for (int i = 1; i <= N; i++) {
        aji.push_back(L+i-1);
    }
    
    if (*min_element(aji.begin(), aji.end()) >= 0) {
        aji.erase(find(aji.begin(), aji.end(), *min_element(aji.begin(), aji.end())));
    }
    else if (*max_element(aji.begin(), aji.end()) <= 0) {
        aji.erase(find(aji.begin(), aji.end(), *max_element(aji.begin(), aji.end())));
    }
    else {
        aji.erase(find(aji.begin(), aji.end(), *min_element(aji.begin(), aji.end(), [](int a, int b) {return abs(a) < abs(b);})));
    }
    
    int sum = 0;
    for (int i = 0; i < aji.size(); i++) {
        sum += aji[i];
    }
    
    cout << sum << endl;
    
    return 0;
}