#include <iostream>
using namespace std;

int main(){
// Implicit type casting

//  1. Adding int or float values
      int a = 12;
      float b = 2.5;

// 2. char to int      
      char ch = 'A';
      char a = ch+1;
      cout << a << endl; // ASCII (B)

// 3. int to char
      int a = 97;
      char ch = a;
      cout << ch << endl;

// Explicit type casting
      int num1 = 10;
      float num2 = 5.5;
      float result = num1 + (int)num2;
      cout << result << endl; // store as 15.0

// 1. double to int   
      double pi = 3.1459265;
      int intpi = (int)pi;
      cout << intpi << endl; // 3

// 2. float to char
      float floatinNumber = 68.5;
      char charvalue = (char)floatinNumber;
      cout << charvalue << endl; // D

// 3. int tto float
      int a = 10;
      int b = 5.5; // b = 3 
      float c = a/b; // int / int = int value (very imp) and than store in float 
      cout << c << endl;

      int a = 20;
      int b = 3.5;
      float c = a/ ((float)b);
      cout << c << endl; // Explicit conversion from int to float
}