class CodeforcesTask397BSolution {
public:
    string result;
    int t;
    vector < vector < int > > queries;
    void read_input() {
        cin >> t;
        for (int i = 0; i < t; i++) {
            vector < int > query;
            int k, l, r;
            cin >> k >> l >> r;
            query.push_back(k);
            query.push_back(l);
            query.push_back(r);
            queries.push_back(query);
        }
    }
    void process_task() {
        vector < string > res;
        for (int i = 0; i < t; i++) {
            int k = queries[i][0] / queries[i][1];
            string s = "Yes";
            if (k * queries[i][2] < queries[i][0]) {
                s = "No";
            }
            res.push_back(s);
        }
        result = "\n".join(res);
    }
    string get_result() {
        return result;
    }
};

int main() {
    CodeforcesTask397BSolution Solution;
    Solution.read_input();
    Solution.process_task();
    cout << Solution.get_result();
    return 0;
}