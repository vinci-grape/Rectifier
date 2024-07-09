#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int count = 0;
    int record = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
            count += 1;
        } else {
            if (count > record) {
                record = count;
            }
            count = 0;
        }
    }
    if (count > record) {
        record = count;
    }

    std::cout << record << std::endl;


    return 0;
}