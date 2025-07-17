#include <iostream>
#include <vector>
#include <numeric> // for partial_sum

int main() {

      // vector<int> first(4);
      // first.push_back(1);
      // first.push_back(2);
      // first.push_back(3);
      // first.push_back(4);

    std::vector<int> first = {1, 2, 3, 4}; // Direct initialization
    std::vector<int> result(first.size());

    std::partial_sum(first.begin(), first.end(), result.begin());

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}