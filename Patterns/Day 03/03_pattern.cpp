#include <iostream>
using namespace std;

// int main(){
//       int n;
//       cout << "Enter the number: ";
//       cin >> n;

//       int i = 1;

//       while(i<=n){
//             int j = 1;
//             while(j<=n){
//                   cout << j << " ";
//                   j++;
//             }
//             cout << endl;
//             i++;
//       }
//       return 0;
// }

// Output:
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

// Reverse number Patterns

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;

      int i = 1;

      while(i<=n){
            int j = 1;
            while(j<=n){
                  cout << n-j+1 << " ";
                  j++;
            }
            cout << endl;
            i++;
      }
      return 0;
}

// Output:
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 