#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<string> a = {"a","e","i","o","u"};
    
    for(string str : a) {
        if(str.compare(s) == 0) {
            cout << "vowel" << endl;
            return 0;
        }
    }
    
    cout << "consonant" << endl;
    
    return 0;
}