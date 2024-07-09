#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int s, x, d=2; 
    cin >> s;
    set<int> a;
    a.insert(s);

    while(1) {
        if(s%2==0){
            x = s/2;
            if(a.find(x)!=a.end()) {
                cout << d << endl;
                return 0;
            }
            a.insert(x);
        } else {
            x = 3*s + 1;
            if(a.find(x)!=a.end()) {
                cout << d << endl;
                return 0;
            }
            a.insert(x);
        }
        s = x;
        d++;
    }

    cout << d << endl;

    return 0;
}