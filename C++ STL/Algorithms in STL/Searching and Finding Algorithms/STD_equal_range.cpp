#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 2, 2, 3, 4, 5};
    auto range = std::equal_range(v.begin(), v.end(), 2);

    std::cout << "Start position: " << (range.first - v.begin()) << std::endl;
    std::cout << "End position: " << (range.second - v.begin()) << std::endl;

    std::cout << "Elements equal to 2: ";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }

    return 0;
} 