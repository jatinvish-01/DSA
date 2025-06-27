#include <iostream>
using namespace std;

int main(){
      int x;
      cout << "Enter X: ";
      cin >> x;
      
      int y;
      cout << "Enter Y: ";
      cin >> y;

      int result = (x > y) ? x : y;
      cout << "The greatest value is: " << result << endl;

      return 0;
}

      // int x = 5, y = 10; 
      // int result = x > y ? x + y : x - y; 
      // std::cout << result; 

      // Output:
      // -5