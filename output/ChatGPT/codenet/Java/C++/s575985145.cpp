#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;
    std::vector<std::vector<int>> graph(size, std::vector<int>(size, 0));

    int id, cols;
    std::vector<int> row;
    for (int i = 0; i < size; i++) {
        std::cin >> id >> cols;
        row = std::vector<int>(size, 0);
        for (int j = 0; j < cols; j++) {
            int col;
            std::cin >> col;
            row[col - 1] = 1;
        }
        graph[id - 1] = row;
    }

    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            std::cout << graph[i][j];
            if (j < graph[i].size() - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}