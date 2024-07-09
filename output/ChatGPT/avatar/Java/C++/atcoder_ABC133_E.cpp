#include <iostream>
#include <vector>

using namespace std;

class atcoder_ABC133_E {
private:
    class Node {
    public:
        long long pattern = 0;
        int index;
        vector<int> children;
        int parent = -1;
        
        Node(int i) {
            this->index = i;
        }
        
        void setParent(int K, int parent, int use, vector<Node>& nodes) {
            this->pattern = K - use;
            this->parent = parent;
            int count = 1;
            if (parent != -1) {
                count++;
            }
            for (int n : children) {
                if (n == this->parent) {
                    continue;
                }
                nodes[n].setParent(K, index, count, nodes);
                count++;
            }
        }
    };
    
public:
    void solve() {
        int N, K;
        cin >> N >> K;
        
        vector<Node> nodes(N);
        for (int i = 0; i < N; i++) {
            nodes[i] = Node(i);
        }
        
        for (int i = 0; i < N - 1; i++) {
            int a, b;
            cin >> a >> b;
            nodes[a - 1].children.push_back(b - 1);
            nodes[b - 1].children.push_back(a - 1);
        }
        
        nodes[0].setParent(K, -1, 0, nodes);
        
        long long patterns = 1;
        for (int i = 0; i < N; i++) {
            patterns = (patterns * nodes[i].pattern) % 1'000'000'007;
        }
        
        cout << patterns << endl;
    }
};

int main() {
    atcoder_ABC133_E main;
    main.solve();
    return 0;
}