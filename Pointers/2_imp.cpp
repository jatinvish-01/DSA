#include <iostream>
#include <array>
using namespace std;

int main(){
      // Array to pointers
      // int a = 1, b = 5, c = 10;

      // int* arr[3];
      // arr[0] = &a;
      // arr[1] = &b;
      // arr[2] = &c;

      // cout << arr[0] << endl;
      // cout << *arr[0] << endl;

      // Pointer to an array

      int arr[5] = {1,2,3,4,5};
      int (*ptr) [5] = &arr;

      // base address of first block of array
      cout << "arr:  " << arr << endl;

      // &arr -> base address of complete array
      cout << "&arr: " << &arr << endl;
      
      // ptr -> address of complete array
      cout << "ptr:  " << ptr << endl;

      // ptr -> address of complete array
      cout << "*ptr: " << *ptr << endl;

      // ptr -> address of starting of array block/index
      cout << "(*ptr)[0]: " << (*ptr)[0] << endl;
      cout << "(*ptr)[1]: " << (*ptr)[1] << endl;
      cout << "(*ptr)[2]: " << (*ptr)[2] << endl;
      cout << "arr + 1:  " << arr+1 << endl;
      cout << "ptr + 1: " << ptr+1 << endl;

      cout << *ptr + 3 << endl;
      cout << *ptr[3] << endl;
      cout << *(ptr + 3) << endl;
      cout << &ptr[3] << endl;

      return 0;
}