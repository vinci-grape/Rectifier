#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <iterator>
#include <utility>
#include <list>
#include <stack>
#include <iomanip>
#include <sstream>

using namespace std;

class Main {
public:
    void run() {
        string Sd = "";
        string T = "";
        int count = 0;
        char c;
        bool ok = false;
        int first = -1;
        int end = -1;
        for(int j = 0; j < Sd.length(); j++) {
            count = 0;
            for(int i = 0; i+j < Sd.length(); i++) {
                c = Sd.charAt(i+j);
                if(c == '?' || c == T.charAt(count)) {
                    count++;
                    if(count == T.length()) {
                        first = i+j - T.length() + 1;
                        end = i+j;
                        ok = true;
                        break;
                    }
                }else count = 0;

            }
        }
        if(ok) {
            for(int i = 0; i < Sd.length(); i++) {
                if(first <= i && i <= end) {
                    cout << T.charAt(i - first);
                }else {
                    if(Sd.charAt(i) == '?') cout << "a";
                    else cout << Sd.charAt(i);
                }
            }
            cout << endl;
        }else {
            cout << "UNRESTORABLE" << endl;
        }
    }
};

int main() {
    Main m;
    m.run();
    return 0;
}