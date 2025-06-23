#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;

      int row = 1;
      
      while(row<=n){
            int col = 1; int value = row; 
            while(col<=row){
                  cout << value << " ";
                  value++;
                  col++;
            }
            cout << endl;
            row++;
      }
      return 0;
}

// Output:
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 