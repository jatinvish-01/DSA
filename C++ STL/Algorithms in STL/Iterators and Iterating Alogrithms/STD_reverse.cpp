#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a){
      cout << 2*a << " ";
}

int main(){

      vector<int> arr(5);

      arr[0] = 11;
      arr[1] = 17;
      arr[2] = 35;
      arr[3] = 4;
      arr[4] = 50;


      // int target = 11;
      sort(arr.begin(), arr.end());

      for(int a : arr){ // a Belongs to arr
            cout << a << " ";
      }

      cout << endl;

      reverse(arr.begin(), arr.end());

      for(int a : arr){ // a Belongs to arr
            cout << a << " ";
      }
      

      return 0;
}