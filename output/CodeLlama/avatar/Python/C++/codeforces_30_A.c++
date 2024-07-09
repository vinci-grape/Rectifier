#include <iostream>
using namespace std;
int task4 ( int A , int B , int n ) {
    for ( int X = -1000 ; X <= 1000 ; X++ ) {
        if ( A * ( X * X * X ) == B ) {
            return X;
        }
    }
    return "No solution";
}
int main () {
    int A , B , n;
    cin >> A >> B >> n;
    cout << task4 ( A , B , n ) << endl;
    return 0;
}