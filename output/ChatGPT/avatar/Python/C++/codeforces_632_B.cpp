#include <iostream>
#include <vector>
using namespace std;

int Bob_sMaxStrength(vector<pair<int, char>> pieces) {
    int pScore = 0;
    int sScore = 0;
    int pMaxScore = 0;
    int sMaxScore = 0;

    for (auto piece : pieces) {
        if (piece.second == 'B') {
            pScore += piece.first;
            pMaxScore += piece.first;
        }
    }

    for (int i = 0; i < pieces.size(); i++) {
        if (pieces[i].second == 'A') {
            pScore += pieces[i].first;
            if (pScore > pMaxScore) {
                pMaxScore = pScore;
            }
        } else {
            pScore -= pieces[i].first;
        }
    }

    for (int i = pieces.size() - 1; i >= 0; i--) {
        if (pieces[i].second == 'A') {
            sScore += pieces[i].first;
            if (sScore > sMaxScore) {
                sMaxScore = sScore;
            }
        } else {
            sScore -= pieces[i].first;
        }
    }

    if (pMaxScore > sMaxScore) {
        return pMaxScore;
    }
    return sMaxScore;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, char>> pieces;
    for (int i = 0; i < n; i++) {
        int strength;
        char type;
        cin >> strength >> type;
        pieces.push_back(make_pair(strength, type));
    }

    int result = Bob_sMaxStrength(pieces);
    cout << result << endl;

    return 0;
}