#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime>
#include <assert.h>
#define pi 3.14159
#define mod 1000000007
using namespace std;
int main() {
    char str[1000];
    int dotIndex = 0;
    for (int i = 0; i < 1000; i++) {
        if (str[i] == '.') {
            dotIndex = i;
            break;
        }
    }
    if (str[dotIndex - 1] == '9') {
        cout << "GOTO Vasilisa." << endl;
    } else if (dotIndex + 2 > 1000) {
        cout << "NO" << endl;
    } else {
        string _str = "";
        for (int i = 0; i < dotIndex; i++) {
            _str += str[i];
        }
        cout << (new BigInteger(_str)).add(new BigInteger("1")).toString() << endl;
    }
    return 0;
}