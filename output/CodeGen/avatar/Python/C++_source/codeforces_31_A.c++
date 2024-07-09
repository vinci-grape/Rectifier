#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int y;
vector<int> arr;

int main ( ) {
    cin >> y;
    for ( int i = 0 ; i < y ; i++ ) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for ( int i = 0 ; i < y ; i++ ) {
        for ( int j = 0 ; j < y ; j++ ) {
            if ( i == j ) continue;
            for ( int k = 0 ; k < y ; k++ ) {
                if ( arr[k]!= arr[j] && arr[k]!= arr[i] && arr[k] == arr[i] + arr[j] ) {
                    cout << k + 1 << " " << j + 1 << " " << i + 1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}