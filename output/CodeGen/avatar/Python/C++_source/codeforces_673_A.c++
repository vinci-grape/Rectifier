#include <iostream>
#include <list>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    list <int> arr;
    for ( int i = 0 ; i < n ; i++ ) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    if ( arr[0] > 15) {
        cout << 15;
    }
    else {
        for ( int i = 1 ; i < n ; i++ ) {
            if ( arr[i] - arr[i-1] > 15) {
                cout << arr[i-1] + 15;
                break;
            }
        }
        if ( arr[n-1] == 90 || arr[n-1] + 15 >= 90) {
            cout << 90;
        }
        else {
            cout << arr[n-1] + 15;
        }
    }
    return 0;
}