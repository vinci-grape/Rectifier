#include <iostream>
#include <vector>
#include <string>

class CodeforcesTask397BSolution {
private:
    std::string result;
    int t;
    std::vector<std::vector<int>> queries;

public:
    void read_input() {
        std::cin >> t;
        for (int i = 0; i < t; i++) {
            std::vector<int> query(3);
            for (int j = 0; j < 3; j++) {
                std::cin >> query[j];
            }
            queries.push_back(query);
        }
    }

    void process_task() {
        std::vector<std::string> res;
        for (const auto& query : queries) {
            int k = query[0] / query[1];
            res.push_back((k * query[2] >= query[0]) ? "Yes" : "No");
        }
        result = std::to_string(res);
    }

    std::string get_result() {
        return result;
    }
};

int main() {
    CodeforcesTask397BSolution solution;
    solution.read_input();
    solution.process_task();
    std::cout << solution.get_result() << std::endl;

}