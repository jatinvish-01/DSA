#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

      std::vector<int> first{1,2,3,4};
      std::vector<int> second{3,4,5,6};

      std::vector<int> result;

      set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

      for(int a : result){
            cout << a << " ";
      }cout << endl;

      return 0;
}