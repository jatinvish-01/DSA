#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){

      std::vector<int> arr(5);

      std::iota(arr.begin(), arr.end(), 250); // starting value is 250

      for(int a : arr){
            cout << a << " ";
      }
      cout << endl;

      return 0;
}