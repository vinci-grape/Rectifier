#include <iostream>
#include <vector>

using namespace std;

int mapNum;
int h;
int w;
vector<vector<char>> battleTown;
int bomberActNum;
vector<char> bomberAct;
int xOfTank;
int yOfTank;
int xOfBomber;
int yOfBomber;

void moveBomber(int a, int b) {
    if (0 <= a && a < h && 0 <= b && b < w) {
        if (battleTown[a][b] == '^') {
            for (int i = a - 1; i >= 0; i--) {
                if (battleTown[i][b] == '*') {
                    battleTown[i][b] = '.';
                    return;
                } else if (battleTown[i][b] == '#') {
                    return;
                } else {
                    a--;
                }
            }
        } else if (battleTown[a][b] == 'v') {
            for (int i = a + 1; i < h; i++) {
                if (battleTown[i][b] == '*') {
                    battleTown[i][b] = '.';
                    return;
                } else if (battleTown[i][b] == '#') {
                    return;
                } else {
                    a++;
                }
            }
        } else if (battleTown[a][b] == '<') {
            for (int i = b - 1; i >= 0; i--) {
                if (battleTown[a][i] == '*') {
                    battleTown[a][i] = '.';
                    return;
                } else if (battleTown[a][i] == '#') {
                    return;
                } else {
                    b--;
                }
            }
        } else if (battleTown[a][b] == '>') {
            for (int i = b + 1; i < w; i++) {
                if (battleTown[a][i] == '*') {
                    battleTown[a][i] = '.';
                    return;
                } else if (battleTown[a][i] == '#') {
                    return;
                } else {
                    b++;
                }
            }
        }
    }
}

int main() {
    cin >> mapNum;

    for (int i = 0; i < mapNum; i++) {
        if (i > 0) {
            cout << endl;
        }
        cin >> h >> w;

        battleTown.resize(h, vector<char>(w));

        for (int j = 0; j < h; j++) {
            for (int k = 0; k < w; k++) {
                cin >> battleTown[j][k];

                if (battleTown[j][k] == '^' || battleTown[j][k] == 'v' || battleTown[j][k] == '<' || battleTown[j][k] == '>') {
                    xOfTank = j;
                    yOfTank = k;
                }
            }
        }

        cin >> bomberActNum;
        bomberAct.resize(bomberActNum);

        for (int l = 0; l < bomberActNum; l++) {
            cin >> bomberAct[l];

            if (bomberAct[l] == 'S') {
                xOfBomber = xOfTank;
                yOfBomber = yOfTank;
                moveBomber(xOfBomber, yOfBomber);
            }
        }

        for (int s = 0; s < h; s++) {
            for (int k = 0; k < w; k++) {
                cout << battleTown[s][k];
            }
            cout << endl;
        }
    }

    return 0;
}