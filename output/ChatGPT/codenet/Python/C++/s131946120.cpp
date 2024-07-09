#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> words;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.insert(word);
    }
    cout << words.size() << endl;
    return 0;
}