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

      vector<int> arr(5);

      arr[0] = 11;
      arr[1] = 20;
      arr[2] = 30;
      arr[3] = 40;
      arr[4] = 50;


      int target = 40;
      auto it = find_if(arr.begin(), arr.end(), checkEven);
      cout << *it << endl;

      return 0;
}