#include <iostream>
using namespace std;

int main() {
    int H, W, A, B;
    cin >> H >> W >> A >> B;
    
    if (W < 2 * A || H < 2 * B) {
        cout << -1 << endl;
        return 0;
    }
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if ((i < B && j < A) || (i >= B && j >= A))
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }
    
    return 0;
}