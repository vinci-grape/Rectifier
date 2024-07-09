#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int swapCount = 0; 
    
    for (int i = 0; i < a.size(); i++) {
        int mini = i;
        
        for (int j = i; j < a.size(); j++) {
            if (a[j] < a[mini]) {
                mini = j;
            }
        }
        
        if (mini != i) {
            swap(a[mini], a[i]);
            swapCount++;
        }
    }
    
    cout << a[0];
    for (int i = 1; i < a.size(); i++) {
        cout << " " << a[i];
    }
    cout << endl;
    
    cout << swapCount << endl;
    
    return 0;
}