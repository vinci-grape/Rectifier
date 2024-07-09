#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

class Main {
public:
	static int N;
	static int M;
	static char[][] room;
	static int D;
	static int num;
	static void inputRoom() {
		string str_room;
		for (int i = 0; i < N; i++) {
			getline(cin, str_room);
			room[i] = str_room.c_str();
		}
	}
	static void setWE() {
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
	static void setNS() {
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
	static void main(int argc, char *argv[]) {
		N = atoi(argv[1]);
		M = atoi(argv[2]);
		D = atoi(argv[3]);
		inputRoom();
		if (M >= D) {
			setWE();
		}
		if (N >= D) {
			setNS();
		}
		cout << num << endl;
	}
};

int main(int argc, char *argv[]) {
	Main m;
	m.main(argc, argv);
	return 0;
}