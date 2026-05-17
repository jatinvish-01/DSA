#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

      std::vector<int> arr(5);

      arr.push_back(10);
      arr.push_back(20);
      arr.push_back(30);
      arr.push_back(40);
      arr.push_back(50);

      int target = 40;

      auto it = std::binary_search(arr.begin(), arr.end(), target);

      cout << it << endl; // 1 in boolean

      return 0;
}