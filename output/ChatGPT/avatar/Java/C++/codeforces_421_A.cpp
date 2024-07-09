#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    vector<int> list1(a);
    vector<int> list2(b);
    
    for(int i=0; i<a; i++) {
        cin >> list1[i];
    }
    for(int i=0; i<b; i++) {
        cin >> list2[i];
    }
    
    for(int i=0; i<n; i++) {
        if(find(list1.begin(), list1.end(), i+1) != list1.end()) {
            cout << 1 << " ";
        } else {
            cout << 2 << " ";
        }
    }
    
    return 0;
}