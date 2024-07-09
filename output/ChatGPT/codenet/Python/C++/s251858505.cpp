#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;
    
    int count = std::inner_product(str1.begin(), str1.end(), str2.begin(), 0, std::plus<>(), std::equal_to<>());
    
    std::cout << count << std::endl;
    
    return 0;
}