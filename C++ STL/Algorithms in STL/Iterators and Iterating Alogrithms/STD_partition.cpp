#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a){
      cout << 2*a << " ";
}

bool checkEven(int a){
      return a%2 == 0;
}

int main(){

      vector<int> arr(6);

      arr[0] = 10;
      arr[1] = 11;
      arr[2] = 12;
      arr[3] = 13;
      arr[4] = 14;
      arr[5] = 15;

      auto it = partition(arr.begin(), arr.end(), checkEven);

      for(int a : arr){
            cout << a << " "; // 10 14 12 13 11 15 
      }

      cout  << endl;
      return 0;   
}