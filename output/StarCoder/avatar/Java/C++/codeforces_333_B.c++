#include <bits/stdc++.h>
using namespace std;

class FastReader {
public:
    FastReader() {
        s = new stringstream("");
    }

    string next() {
        while (s->peek() =='') s->get();
        string tmp = "";
        while (s->peek()!= EOF && s->peek()!= '\n') tmp += s->get();
        while (s->peek() == '\n') s->get();
        return tmp;
    }

    int nextInt() {
        return stoi(next());
    }

private:
    stringstream *s;
};

int main() {
    FastReader in;
    int n = in.nextInt(), m = in.nextInt();
    set<int> bannedRows, bannedCols;
    for (int i = 0; i < m; i++) {
        int r = in.nextInt();
        if (r > 1 && r < n) bannedRows.insert(r);
        int c = in.nextInt();
        if (c > 1 && c < n) bannedCols.insert(c);
    }
    int answer = (n - 2) * 2;
    answer -= bannedRows.size();
    answer -= bannedCols.size();
    if (n % 2!= 0) {
        int mid = (n + 1) / 2;
        if (!bannedRows.count(mid) &&!bannedCols.count(mid)) answer--;
    }
    cout << answer << endl;
    return 0;
}