#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ( ) {
    int n;
    cin >> n;
    vector <string> q;
    for ( int i = 0; i < n; i++ ) {
        string s;
        cin >> s;
        q.push_back(s);
    }
    int count = 0;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            if ( q[i][0] == q[j][q[j].size()-1] ) {
                count++;
                continue;
            }
            for ( int k = 0; k < n; k++ ) {
                if ( q[i][0] == q[k][q[k].size()-1] ) {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}