#include <iostream>
#include <string>

void solve(std::string S, std::string T, int A, int B, std::string U) {
    if (S == U) {
        A -= 1;
    }
    if (T == U) {
        B -= 1;
    }
    std::cout << A << " " << B << std::endl;
}

int main() {
    std::string S, T, U;
    int A, B;
    
    std::cin >> S >> T >> A >> B >> U;
    solve(S, T, A, B, U);
    
    return 0;
}