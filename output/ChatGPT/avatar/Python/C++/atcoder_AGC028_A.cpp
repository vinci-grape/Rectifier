#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int gcd(int a, int b) {
    while(b > 0) {
        a, b = b, a % b;
    }
    return a;
}

int main() {
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;

    vector<char> list_S(S.begin(), S.end());
    vector<char> list_T(T.begin(), T.end());

    vector<int> Number_i(N);
    for(int i = 0; i < N; i++) {
        Number_i[i] = i;
    }

    vector<int> Number_iMN;
    for(int i : Number_i) {
        Number_iMN.push_back(i * M / N);
    }

    vector<int> Number_j(M);
    for(int j = 0; j < M; j++) {
        Number_j[j] = j;
    }

    unordered_set<int> Kaburi_j(Number_iMN.begin(), Number_iMN.end());
    vector<int> Kaburi_i;
    for(int j : Kaburi_j) {
        Kaburi_i.push_back(j * N / M);
    }

    int counter = 0;
    int Flag = 0;
    int Kaburi_Size = Kaburi_i.size();
    while(counter <= Kaburi_Size - 1) {
        if(list_S[Kaburi_i[counter]] == list_T[Kaburi_j[counter]]) {
            // pass
        } else {
            Flag = 1;
            break;
        }
        counter++;
    }

    if(Flag == 1) {
        cout << -1 << endl;
    } else {
        cout << N * M / gcd(N, M) << endl;
    }

    return 0;
}