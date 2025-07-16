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
      arr[1] = 11;
      arr[2] = 30;
      arr[3] = 11;
      arr[4] = 50;


      // int target = 11;
      int ans = count_if(arr.begin(), arr.end(), checkEven);
      cout << ans << endl;

      return 0;
}