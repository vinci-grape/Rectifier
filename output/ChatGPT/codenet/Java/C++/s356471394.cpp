#include <iostream>
#include <string>

using namespace std;

int N, M, D;
int num = 0;
char room[1000][1000];

void setWE() {
    bool canPut = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M - D + 1; j++) {
            canPut = true;

            for (int k = 0; k < D; k++) {
                if (room[i][j + k] == '#') {
                    canPut = false;
                    break;
                }
            }

            if (canPut == true) {
                num++;
            }
        }
    }
}

void setNS() {
    bool canPut = true;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - D + 1; j++) {
            canPut = true;

            for (int k = 0; k < D; k++) {
                if (room[j + k][i] == '#') {
                    canPut = false;
                    break;
                }
            }

            if (canPut == true) {
                num++;
            }
        }
    }
}

void inputRoom() {
    string str_room;

    for (int i = 0; i < N; i++) {
        cin >> str_room;
        for (int j = 0; j < M; j++) {
            room[i][j] = str_room[j];
        }
    }
}

int main() {
    cin >> N >> M >> D;

    inputRoom();

    if (M >= D) {
        setWE();
    }

    if (N >= D) {
        setNS();
    }

    cout << num << endl;

    return 0;
}