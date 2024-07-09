#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    int dic[5];
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            dic[i] = 0;
        } else {
            dic[i] = a[i] - 10;
        }
    }

    int min_num = 0;
    int a_sum = 0;
    for (int i = 0; i < 5; i++) {
        if (dic[i] == min(dic, dic + 5)) {
            min_num = i;
        }
        a_sum += dic[i];
    }

    cout << abs(a_sum) + a[min_num];
    return 0;
}