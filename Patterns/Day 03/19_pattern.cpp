#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;

      int row = 1;

      while(row<=n){
            int space = n-row;
            while(space){
                  cout << " "; // For space
                  space--;
            }
            int col = 1;
            while(col<=row){ // For star
                  cout << "*"; //cout << row;
                  col++;
            }
            cout << endl;
            row++;
      }
      return 0;
}

// Output:
//    *
//   **
//  ***
// ****