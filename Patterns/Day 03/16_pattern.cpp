#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
 
      int row = 1;
      char ch = 'A';
      
      while(row<=n){
            int col = 1;
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
// D E F 
// G H I J 