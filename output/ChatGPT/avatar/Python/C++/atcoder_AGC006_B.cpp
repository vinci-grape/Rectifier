#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sub(std::vector<int> y, int debug) {
    if (debug) {
        std::cout << "D " << y << std::endl;
    }
    while (y.size() > 1) {
        std::vector<int> temp;
        for (int i = 0; i < y.size() - 2; i++) {
            std::vector<int> sub_y(y.begin() + i, y.begin() + i + 3);
            std::sort(sub_y.begin(), sub_y.end());
            temp.push_back(sub_y[1]);
        }
        y = temp;
        if (debug) {
            std::cout << "D " << y << std::endl;
        }
    }
    return y;
}

int calc(int x) {
    std::vector<int> y;
    for (int i = 1; i <= x; i++) {
        y.push_back(i);
    }
    y = sub(y);
    if (y[0] == 2) {
        sub(y, 1);
        std::cout << "= " << x << std::endl;
    }
    return y[0];
}

int main() {
    int N, X;
    std::cin >> N >> X;

    if (X == 1 || X == N * 2 - 1) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
        std::vector<int> xs;
        if (X == N * 2 - 2) {
            for (int i = N - 1; i <= X + 2; i++) {
                xs.push_back(i);
            }
            for (int i = 1; i < N - 1; i++) {
                xs.push_back(i);
            }
        } else {
            std::vector<int> ys;
            for (int i = 1; i < X - 1; i++) {
                ys.push_back(i);
            }
            for (int i = X + 3; i <= N * 2; i++) {
                ys.push_back(i);
            }
            for (int i = 0; i < N - 3; i++) {
                xs.push_back(ys[i]);
            }
            xs.push_back(X + 2);
            xs.push_back(X - 1);
            xs.push_back(X);
            xs.push_back(X + 1);
            for (int i = N - 3; i < ys.size(); i++) {
                xs.push_back(ys[i]);
            }
        }
        for (auto x : xs) {
            std::cout << x << std::endl;
        }
    }

    return 0;
}