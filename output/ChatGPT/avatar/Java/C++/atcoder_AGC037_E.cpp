#include <iostream>
#include <string>

int main() {
    int N, K;
    std::cin >> N >> K;
    std::string S;
    std::cin >> S;

    bool firstTime = true;
    int step = 1;
    while (K > 0) {
        std::string T = S;
        std::reverse(T.begin(), T.end());
        std::string revU = S + T;
        std::reverse(revU.begin(), revU.end());
        std::string sDash = S;
        for (int i = N; i >= 0; i -= step) {
            std::string tmp = revU.substr(i, N);
            if (sDash.compare(tmp) > 0) {
                sDash = tmp;
            } else {
                if (!firstTime) {
                    break;
                }
            }
        }
        if (firstTime) {
            firstTime = false;
            if (pow(2, K) > N) {
                char c = sDash[0];
                for (int i = 0; i < N; i++) {
                    std::cout << c;
                }
                std::cout << std::endl;
                return 0;
            }
        } else {
            step += step;
        }
        K--;
        std::reverse(S.begin(), S.end());
        S = sDash;
        std::reverse(S.begin(), S.end());
    }
    std::reverse(S.begin(), S.end());
    std::cout << S << std::endl;

    return 0;
}