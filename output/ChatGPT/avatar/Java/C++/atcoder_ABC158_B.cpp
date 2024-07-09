#include <iostream>
#include <cmath>

int main() {
    long long N, A, B;
    std::cin >> N >> A >> B;
    long long k = 0;

    if (1 <= N && N <= pow(10, 18) && 0 <= A && 0 <= B && 0 < A + B && A + B <= pow(10, 18)) {
        if (A + B <= N) {
            k = N / (A + B);
            if (N - k * (A + B) > A) {
                std::cout << A * k + (N - k * (A + B)) - (N - (k * (A + B) + A)) << std::endl;
            } else {
                std::cout << A * k + (N - k * (A + B)) << std::endl;
            }
        } else if (A + B > N && A <= N) {
            std::cout << A << std::endl;
        } else {
            std::cout << N << std::endl;
        }
    }


    return 0;
}