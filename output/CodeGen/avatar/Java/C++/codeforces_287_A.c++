#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class codeforces_287_A {
public:
    void main(string args[]) {
        string str[4];
        int i = -1;
        while (i!= 3) {
            i = i + 1;
            str[i] = cin.get();
        }
        int u = -1;
        i = -1;
        int yes = 0;
        while (u!= 2) {
            u = u + 1;
            i = -1;
            while (i!= 2) {
                i = i + 1;
                if ((str[u].at(i) == str[u].at(i + 1) && (str[u + 1].at(i) == str[u].at(i) || str[u + 1].at(i + 1) == str[u].at(i))) || (str[u + 1].at(i) == str[u + 1].at(i + 1) && (str[u].at(i) == str[u + 1].at(i) || str[u].at(i + 1) == str[u + 1].at(i)))) {
                    yes = 1;
                    break;
                }
            }
            if (yes == 1) {
                break;
            }
        }
        if (yes == 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
};