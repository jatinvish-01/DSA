#include <iostream>
using namespace std;

int main(){
      int age;
      cout << "Enter the age for votting: ";
      cin >> age;

      (age >= 18) ? cout << "Can vote" : cout << "Cannot vote!!";
      return 0;
}