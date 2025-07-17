#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a){
      cout << 2*a << " ";
}

int main(){

      vector<int> arr(6);

      arr[0] = 10;
      arr[1] = 10;
      arr[2] = 30;
      arr[3] = 60;
      arr[4] = 30;
      arr[5] = 60;

      sort(arr.begin(), arr.end());

      auto it = unique(arr.begin(), arr.end());
      arr.erase(it, arr.end());
      for(int a : arr){
            cout << a << " ";
      }
      cout  << endl;
      return 0;   
}