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

      arr.push_back(99);
      std::push_heap(arr.begin(), arr.end());
      for(int a : arr){
            cout << a << " "; // 99 44 77 22 19 38 
      }cout << endl;

      // Deletion

      std:: pop_heap(arr.begin(), arr.end());
      for(int a : arr){
            cout << a << " "; // 22 77 19 38 44 99 
      }
      cout << endl;

      // pop from back 

      std:: pop_heap(arr.begin(), arr.end());
      arr.pop_back();

      cout << endl;
      return 0;
}