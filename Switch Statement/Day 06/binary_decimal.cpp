#include <iostream>
#include <cmath>
using namespace std;


int deciamlToBinary_method1(int n){
      // Division Method

      int binaryNo = 0;
      int i = 0;
      while(n>0){
            int bit = n%2;
            binaryNo = bit*pow(10, i++) + binaryNo; // Reverse the number
            n = n/2;
      }
      return binaryNo;
}     

int main(){
      int n;
      cout << "Enter the decimal value: ";
      cin >> n;

      int binary = deciamlToBinary_method1(n);
      cout << binary << endl;;
}