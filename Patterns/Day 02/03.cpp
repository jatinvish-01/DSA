#include <iostream>
using namespace std;

int main(){
      int n;
      cout << "Enter the number: ";
      cin >> n;

      int sum = 0;
      int i = 2;

      while(i <= n){
            sum += i;
            i += 2;
      }
      cout << "Sum of given even number: " << sum << endl;
      return 0;
}