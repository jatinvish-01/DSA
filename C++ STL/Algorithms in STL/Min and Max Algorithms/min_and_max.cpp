#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

      std::vector<int> arr;

      arr.push_back(10);
      arr.push_back(20);
      arr.push_back(30);
      arr.push_back(40);
      arr.push_back(50);

      // min_element()

      auto it = std::min_element(arr.begin(), arr.end());
      cout << *it << endl;

      // max_element()

      auto it2 = std::max_element(arr.begin(), arr.end());
      cout << *it2 << endl;

      return 0;
}





     
