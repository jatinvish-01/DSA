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
      arr[1] = 20;
      arr[2] = 30;
      arr[3] = 11;
      arr[4] = 50;


      int target = 11;
      int ans = count(arr.begin(), arr.end(), target);
      cout << ans << endl;

      return 0;
}