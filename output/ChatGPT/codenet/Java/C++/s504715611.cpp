#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cassert>
#include <bitset>
#include <climits>
#include <ctime>
#include <numeric>
#include <functional>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class UnionFind {
    vector<int> Parent;
public:
    UnionFind(int n) {
        Parent.resize(n, -1);
    }
    int root(int A) {
        if (Parent[A] < 0) return A;
        return Parent[A] = root(Parent[A]);
    }
    int size(int A) {
        return -Parent[root(A)];
    }
    bool connect(int A, int B) {
        A = root(A);
        B = root(B);
        if (A == B) return false;
        if (size(A) < size(B)) swap(A, B);
        Parent[A] += Parent[B];
        Parent[B] = A;
        return true;
    }
};

int main() {
    string str;
    cin >> str;
    cout << (str[2] == str[3] && str[4] == str[5] ? "Yes" : "No") << endl;
    return 0;
}