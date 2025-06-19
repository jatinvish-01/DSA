// Using else-if condition

#include <iostream>
using namespace std;

int main(){
      int a;

      cout << "Enter the number: ";
      cin >> a;

      if (a>0){
            cout << "A is positive" << endl;
      }
      else if (a<0){
            cout << "A is neagtive" << endl;
      }
      else{
            cout << "A is 0" << endl;
      }
}