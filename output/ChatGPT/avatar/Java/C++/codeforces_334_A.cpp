#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int square = n * n;
    vector<int> odd;
    vector<int> even;
    
    for (int i = 1; i <= square; i++) {
        if (i % 2 == 0) {
            even.push_back(i);
        } else {
            odd.push_back(i);
        }
    }
    
    int loop = square / n;
    int div = loop / 2;
    
    for (int i = 1; i <= loop; i++) {
        for (int j = 0; j < div; j++) {
            if (i % 2 == 1) {
                cout << odd[0] << " " << even[even.size() - 1] << " ";
                odd.erase(odd.begin());
                even.pop_back();
            } else {
                cout << even[0] << " " << odd[odd.size() - 1] << " ";
                even.erase(even.begin());
                odd.pop_back();
            }
        }
        cout << endl;
    }
    
    return 0;
}