#include <iostream>
using namespace std;
int main ( ) {
int n;
string s;
cin >> n;
cin >> s;
if ( n % 2!= 0 ) {
cout << "No" << endl;
}
else if ( s.substr ( 0, n / 2 ) == s.substr ( n / 2, n ) ) {
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
return 0;
}