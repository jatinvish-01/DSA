#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n){
      int decimal = 0;
      int i = 0;
      while(n){
            int bit = n%10; //extrat the bit 
            decimal = decimal + bit * pow(2, i++);
            n /= 10; 
      }
      return decimal;
}

int main(){
      int n;
      cout << "Enter the binary: ";
      cin >> n;

      int binaryNo = binaryToDecimal(n);
      cout << binaryNo << endl;
}