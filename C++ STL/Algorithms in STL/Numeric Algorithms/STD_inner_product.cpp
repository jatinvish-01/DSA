#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main(){

      std::vector<int> first(4);
      first.push_back(1);
      first.push_back(2);
      first.push_back(3);
      first.push_back(4);
      
      std::vector<int> second(4);
      second.push_back(5);
      second.push_back(6);
      second.push_back(7);
      second.push_back(8);

      int ans = inner_product(first.begin(), first.end(), second.begin(), 0);
      cout << ans << endl;

      return 0;
}