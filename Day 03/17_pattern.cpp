#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
 
      int row = 1;
      
      while(row<=n){
            int col = 1;
            char ch = 'A'+ row - 1; //  ch = 'A' + row  + col - 2;
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

// output:
// A 
// B C 
// C D E 
// D E F G 