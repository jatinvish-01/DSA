#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
 
      int row = 1;
      
      while(row<=n){
            int col = 1;
            char ch = 'A' + row - 1;
            while(col<=n){
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
// A B C D 
// B C D E 
// C D E F 
// D E F G 