#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;
class atcoder_ARC062_B {
public:
    int score(string S) {
        int score = 0;
        for (int i = 0; i < S.size(); i++) {
            char my = i % 2 == 0? 'g' : 'p';
            char his = S[i];
            if (my!= his) {
                score += my == 'p'? 1 : -1;
            }
        }
        return score;
    }
    void solve(int testNumber, InputReader& in, PrintWriter& out) {
        string S;
        in >> S;
        int score = score(S);
        out << score << endl;
    }
};

int main(int argc, char const *argv[])
{
    atcoder_ARC062_B ac;
    ac.solve(1, cin, cout);
    return 0;
}