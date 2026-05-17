#include <iostream>
using namespace std;

int main(){
      char ch;
      
      cout << "Enter a character: ";
      cin >> ch;

      if (islower(ch)){
            cout << "Character in lowercase :" << ch << endl;
      }
      else if(isupper(ch)){
            cout << "Character in uppercase: " << ch << endl;
      }
      else if(isdigit(ch)){
            cout << "Character is number: " << ch << endl;
      }
      else{
            cout << "Character neither alpabetic nor numeric"; 
      }

      return 0;
}