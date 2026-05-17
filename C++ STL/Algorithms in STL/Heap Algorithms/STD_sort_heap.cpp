#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

      vector<int> arr = {19, 22, 38, 77, 44};

      std::make_heap(arr.begin(), arr.end()); // create heap
      std::sort_heap(arr.begin(), arr.end()); //than sort

      for(int a : arr){
            cout << a << " ";
      }
      cout << endl;
      return 0;
}