#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int N, M, D, num = 0;
	cin >> N >> M >> D;
	vector<vector<char>> room(N, vector<char>(M));
	for (int i = 0; i < N; i++) {
		string str_room;
		cin >> str_room;
		for (int j = 0; j < M; j++) {
			room[i][j] = str_room[j];
		}
	}

	if (M >= D) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M - D + 1; j++) {
				bool canPut = true;
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

	if (N >= D) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N - D + 1; j++) {
				bool canPut = true;
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

	cout << num << endl;
	return 0;
}