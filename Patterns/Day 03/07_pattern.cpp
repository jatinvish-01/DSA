#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;

      int row = 1;
      int count  = 1;
      
      while(row<=n){
            int col = 1;
            while(col<=row){
                  cout << count << " ";
                  count++;
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
// 4 5 6 
// 7 8 9 10 