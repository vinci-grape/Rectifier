#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    long long x;
    cin >> N >> x;
    
    vector<long long> sweet;
    for (int i = 0; i < N; i++) {
        long long a;
        cin >> a;
        sweet.push_back(a);
    }
    
    sort(sweet.begin(), sweet.end());
    
    int num = 0;
    for (int i = 0; i < N; i++) {
        if (x - sweet[num] >= 0) {
            x -= sweet[num];
            num++;
        } else {
            break;
        }
    }
    
    if (num == N && x > 0) {
        num--;
    }
    
    cout << num << endl;
    
    return 0;
}