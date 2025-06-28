#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryMethod1(int n) {
      //Division Method
      
    int binaryNo = 0;
    int i = 0;
    while (n > 0) {
        int bit = (n & 1);
        binaryNo = bit*pow(10, i++) + binaryNo;
        n = n >> 1; // right shift
    }
    return binaryNo;
}
int decimalToBinaryMethod2(int n) {
      //Bitwse Method
    int binaryNo = 0;
    int i = 1;
    while (n > 0) {
        int bit = (n & 1);
        binaryNo = bit*pow(10, i++) + binaryNo;
        n = n >> 1; // right shift
    }
    return binaryNo;
}

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;

      int binary = decimalToBinaryMethod2(n);
      cout << binary << endl;
}