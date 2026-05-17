#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
 
      int row = 1;
      
      while(row<=n){
            int col= 1;
            while(col<=n - row + 1){
                  cout << col;
                  col++;
            }
            int star_1 = 1;
            while(star_1<row){
                  cout << "*";
                  star_1++;
            }
            int star_2 = 1;
            while(star_2<row){
                  cout << "*";
                  star_2++;
            }
            int num = n - row + 1;
            while (num >= 1) {
                  cout << num;
                  num--;
            }
            cout << endl;
            row++;
      }
      return 0;
}

// Output:

// 12344321
// 123**321
// 12****21
// 1******1