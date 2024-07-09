#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string s1 = s.substr(0,1);
    string s2 = s.substr(1,2);
    string s3 = s.substr(2,3);
    string s4 = s.substr(3,4);
    int a = 0;
    
    if(s1.compare(s2)==0) a = 1;
    if(s2.compare(s3)==0) a = 1;
    if(s3.compare(s4)==0) a = 1;
    
    if (a==1) {
	    cout << "Bad" << endl;
    } else {
      cout << "Good" << endl;
    }
    
    return 0;
}