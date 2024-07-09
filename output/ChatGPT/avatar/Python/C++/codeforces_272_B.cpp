#include <iostream>
#include <unordered_map>
#include <vector>

int f(int n) {
    int y = 1;
    while (n != 1) {
        if (n % 2) {
            y += 1;
        }
        n /= 2;
    }
    return y;
}

int nPairsWithCommonFX(std::vector<int>& sequence) {
    std::unordered_map<int, std::vector<int>> storage;
    std::vector<int> FXs;
    for (int value : sequence) {
        int y = f(value);
        if (storage.find(y) == storage.end()) {
            storage[y] = {value};
            FXs.push_back(y);
        } else {
            storage[y].push_back(value);
        }
    }
    int count = 0;
    for (int y : FXs) {
        int size = storage[y].size();
        count += size * size;
    }
    count -= sequence.size();
    return count / 2;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        std::cin >> sequence[i];
    }
    std::cout << nPairsWithCommonFX(sequence) << std::endl;
}