#include <iostream>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    string l[h];
    for(int i=0; i<h; i++) {
        cin >> l[i];
    }
    int tmp = 0;
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            if(l[i][j] == '#') {
                if(j < tmp) {
                    cout << "Impossible" << endl;
                    return 0;
                } else {
                    tmp = j;
                }
            }
        }
    }
    cout << "Possible" << endl;
    return 0;
}