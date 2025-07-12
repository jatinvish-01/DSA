#include <iostream>
using namespace std;

int main(){
      int arr[5];
      cout << "Enter the value of n, (n = number of values to take input for): ";

      int n;
      cin >> n;

      for(int i = 0; i<n; i++){
            cout  << "Taking intput for indexs: " << i << endl;
            cin >> arr[i];
      }
      cout << "Printing the values of array" << endl;
      for(int i = 0; i<n; i++){
            cout << arr[i] << ",";
      }
      cout << endl;
}

// Taking input of char

int main(){
      char arr[5];
      cout << "Enter the value of n, (n = number of values to take input for): ";
      
      int n;
      cin >> n;

      for(int i = 0; i<n; i++){
            cout << "Taking intput for indexs: " << i << endl;
            cin >> arr[i];
      }

      cout << "Printing the array" << endl;
      for(int i = 0; i<n; i++){
            cout << arr[i] << ", ";

      }
      cout << endl;
}
