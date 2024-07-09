#include <iostream>
#include <vector>

using namespace std;

long long combi(int N, int K) {
    long long a = 1;
    for (int i = 0; i < K; i++) {
        a *= N - i;
    }
    for (int j = 0; j < K; j++) {
        a /= j + 1;
    }
    return a;
}

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> lis(N);
    for (int i = 0; i < N; i++) {
        cin >> lis[i];
    }

    vector<int> ls;
    for (int i = 0; i < N; i++) {
        ls.push_back(lis[i] % 2);
    }

    int one = count(ls.begin(), ls.end(), 1);
    int zero = count(ls.begin(), ls.end(), 0);

    long long pattern_a = 0;
    long long pattern_b = 0;
    for (int j = 0; j <= zero; j++) {
        pattern_b += combi(zero, j);
    }

    int time = 0;
    while (time <= one) {
        if (time % 2 == P) {
            pattern_a += combi(one, time);
        }
        time++;
    }

    cout << pattern_a * pattern_b << endl;


    return 0;
}