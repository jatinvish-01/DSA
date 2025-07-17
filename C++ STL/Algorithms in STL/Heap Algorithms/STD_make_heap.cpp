#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

      std::vector<int> arr;

      arr.push_back(19);
      arr.push_back(22);
      arr.push_back(38);
      arr.push_back(77);
      arr.push_back(44);

      std::make_heap(arr.begin(), arr.end());
 
      for(int a : arr){
            cout << a << " ";  //77 44 38 22 19 
      }
      cout << endl;

      // I want to add one more element in vector 

      arr.push_back(99);

      for(int a : arr){
            cout << a << " ";  // 77 44 38 22 19 99 (there will breaking heap property)
      }
      cout << endl;

      // To fix it will use - std::push_heap() method

      arr.push_back(99);
      std::push_heap(arr.begin(), arr.end());
      for(int a : arr){
            cout << a << " "; // 99 44 77 22 19 38 
      }
      cout << endl;

      return 0;
}