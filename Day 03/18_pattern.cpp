#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
 
      int row = 1;
      
      while(row<=n){
            int col = 1;
            char ch = 'A' + n - row;
            while(col<=row){
                  cout << ch << " ";
                  ch++;
                  col++;
            }
            cout << endl;
            row++;
      }
      return 0;
}

// Output:
// D 
// C D 
// B C D 
// A B C D