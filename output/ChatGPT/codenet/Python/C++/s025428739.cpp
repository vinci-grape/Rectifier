#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    vector<int> lst;
    lst.push_back(A+B);
    lst.push_back(A-B);
    lst.push_back(A*B);
    cout << *max_element(lst.begin(), lst.end()) << endl;
    return 0;
}