#include <iostream>
using namespace std;

void printCounting(){
      int n;
      cout << "Enter the number: ";
      cin >> n;
      for(int i = 1; i<=n; i++){
            cout << i << endl;
      }
}

int main(){
      printCounting();
      cout << "Hello Guys!!" << endl;
      return 0;
}
