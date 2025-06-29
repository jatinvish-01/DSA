#include <iostream>
using namespace std;

int getMultiplication(int x, int y, int z){
      int result = x * y * z;
      return result;
}

void printNameMultipleTime(){
      for(int i = 1; i<=10; i++){
            cout << "Jatin Hacker!!" << endl;
      }
}

void printTables(int num){
      for(int i = 1; i<=10; i++){
            cout << num << " x " << i << " = " << num*i << endl;
      }
}

int convertIntoCelcius(int far){
      int celcius = (far-32)*5/9;
      return celcius;
}

char convertUpperCase(char ch){
      char answer = ch - 'a' + 'A'; 
      return answer;
}
int main(){
      char result = convertUpperCase('f');
      cout << result << endl;
}