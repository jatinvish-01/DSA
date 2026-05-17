#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

      char ch[100] = "Racecar";
      char * ptr = &ch[0];

      cout << ch << endl;
      cout << &ch << endl;
      cout << *(ch + 3) << endl;
      cout << ptr << endl;
      cout << *ptr << endl;
      cout << *(ptr + 3) << endl;
      cout << ptr + 2 << endl;
      cout << ptr + 4 << endl;

      // char ch[100] = "Babbar";
      // char * ctr = ch; 
      // cout << ctr << endl; // return the output in string form not in integer

      // cout << ch << endl;
      // cout << &ch << endl;
      // cout << ch[0] << endl;
      // cout << &ch[0] << endl;
      // cout << &ctr << endl;
      // cout << *ctr << endl;
      // cout << *(ctr + 3) << endl;
      // cout << ctr << endl;


      // int arr[] = {100, 200, 300, 400, 500};
      // int * p = arr;
      // int * q = arr+1;

      // cout << q << endl;
      // cout << *q << endl;
      // cout << &q << endl;
      // cout << *q + 2 << endl;
      // cout << *(q + 4) << endl;
      // cout << *p + 1 << endl;
      // cout << *(p) + 1 << endl;
      // cout << * (p + 2) << endl;


      // int arr[] = {5, 10, 15, 20, 15};
      // int * ptr = arr;
      // cout << arr << endl;     //0x61fef8
      // cout << ptr << endl;     //0x61fef8
      // cout << &arr[0] << endl; //0x61fef8
      // cout << &arr << endl;    //0x61fef8

      // int b = 5;
      // cout << b << endl;

      // int * p = &b;
      // cout << p << endl;

      // int * q = p;
      // cout << q << endl;


      // int a = 53;                
      // int * ptr = &a;
      // cout <<ptr<< endl;

      // char ch = 'k';
      // char * chr = &ch;
      // cout << sizeof(chr) << endl;

      // bool flag = true;
      // bool * btr = &flag;
      // cout << sizeof(btr) << endl;

      // string st = "Jatin";
      // string * str = &st;
      // cout << sizeof(str) << endl;

            
      // int a = 5;
      // int * ptr = &a;
      // cout << ptr << endl;

      return 0;
}