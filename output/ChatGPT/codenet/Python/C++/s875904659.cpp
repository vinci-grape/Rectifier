#include<iostream>
using namespace std;

void bubbleSort(string cards[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            if (stoi(cards[j].substr(1)) < stoi(cards[j-1].substr(1))) {
                swap(cards[j], cards[j-1]);
            }
        }
    }
}

void selectionSort(string cards[], int n) {
    for (int i = 0; i < n; i++) {
        int mini = i;
        for (int j = i; j < n; j++) {
            if (stoi(cards[j].substr(1)) < stoi(cards[mini].substr(1))) {
                mini = j;
            }
        }
        if (mini != i) {
            swap(cards[i], cards[mini]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    string cards[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    string cards2[n];
    copy(cards, cards + n, cards2);

    bubbleSort(cards, n);
    cout << "Stable" << endl;

    selectionSort(cards2, n);
    if (equal(cards, cards + n, cards2)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

}