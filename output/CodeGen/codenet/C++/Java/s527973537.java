#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <iomanip>
#include <utility>
#include <bitset>
#include <set>
#include <map>
#include <ios>
#include <cstdlib>
using namespace std;
int main() {
    string N; cin >> N;
    int S = 0;
    for (int i=0;i<N.size();i++){
        S += N[i]-'0';
    }
    if (stoi(N)%S==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}