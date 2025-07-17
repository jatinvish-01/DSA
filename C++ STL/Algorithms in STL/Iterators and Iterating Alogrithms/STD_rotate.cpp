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
      arr[1] = 20;
      arr[2] = 30;
      arr[3] = 40;
      arr[4] = 50;
      arr[5] = 60;

      cout << "Before rotate: " << endl;
      for(int a : arr){
            cout << a << " ";
      }
      cout << endl;

      rotate(arr.begin(), arr.begin()+3, arr.end());

      cout << "After rotate: " << endl;
      for(int a : arr){
            cout << a << " ";
      }
      cout << endl;

      return 0;   
}