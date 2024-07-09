#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> A(N);
    std::vector<int> B(N, 0);

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    for (int i = N - 1; i >= 0; i--) {
        int tmp_sum = 0;
        for (int j = (i + 1) * 2 - 1; j < N; j += i + 1) {
            tmp_sum += B[j];
            tmp_sum %= 2;
        }
        B[i] = tmp_sum ^ A[i];
    }

    int sum_B = 0;
    for (int i = 0; i < N; i++) {
        sum_B += B[i];
    }

    std::cout << sum_B << std::endl;
    for (int i = 0; i < N; i++) {
        if (B[i] == 1) {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}