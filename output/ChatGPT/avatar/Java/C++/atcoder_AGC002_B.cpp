#include <iostream>
#include <vector>

using namespace std;

class Box {
public:
    int num;
    bool red;

    Box(int n, bool r) {
        num = n;
        red = r;
    }

    void moveTo(Box& other) {
        if (num == 0) {
            return;
        } else if (num == 1) {
            num = 0;
            other.num++;
            if (red) {
                other.red = true;
            }
            red = false;
        } else {
            num--;
            other.num++;
            if (red) {
                other.red = true;
            }
        }
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    vector<Box> B(N);
    B[0] = Box(1, true);
    for (int i = 1; i < N; i++) {
        B[i] = Box(1, false);
    }

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        B[x - 1].moveTo(B[y - 1]);
    }

    int counter = 0;
    for (const Box& b : B) {
        if (b.red) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}