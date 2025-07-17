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

      auto it = std::upper_bound(arr.begin(), arr.end(), 40);

      cout << *it << endl; // 50
 
      return 0;
}