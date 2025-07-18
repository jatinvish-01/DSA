#include <iostream>
using namespace std;

// int printEvenOdd(int n){
//       if(n%2==0){
//             cout << n << " :is even" << endl;
//       }
//       else{
//             cout << n << " :is odd" << endl;
//       }
// }

// int main(){
//       int n;
//       cout << "Enter the number: ";
//       cin >> n;
//       int result = printEvenOdd(n);
//       return 0;
// }

// int printPositiveNegative(int n){
//       if(n>0){
//             cout << n << " : is positive" << endl;
//       }
//       else if(n == 0){
//             cout << n << " : is Zero" << endl;
//       }
//       else{
//             cout << n << " : is negative" << endl;
//       }            
// }

// int main(){
//       int n;
//       cout << "Enter the number: ";
//       cin >> n;
//       int result = printPositiveNegative(n);
// }

// int printN_num(int n){
//       for(int i = 1; i<=n; i++){
//             cout << i << endl;
//       }
// }

// int main(){
//       int n;
//       cout << "Enter the number: ";
//       cin >> n;
//       printN_num(n);
// }

// int printTableOfN(int n){
//       for(int i = 1; i<=10; i++){
//             cout << n << " x " << i << " = " << (n*i) << endl;
//       }
// }

// int main(){
//       int n;
//       cout << "Enter the number: ";
//       cin >> n;
//       printTableOfN(n);
// }

// int findAverage(int a, int b, int c){
//       int add = a+b+c;
//       int div = add/3;
//       cout << div << endl;
// }

// int main(){
//       findAverage(2, 4, 6);
// }

// void convertToLC(char ch){
//       char ans = ch - 'A' + 'a';
//       cout << "Lower Case character: " << ans << endl;
// }

// int main(){
//       char ch;
//       cout << "Enter the Upper case character: ";
//       cin >> ch;
//       convertToLC(ch);
// }

//Pass by value

// void print(int a){
//       cout << a;
//       a++;
//       a++;
//       a++;
//       cout << a;
//       a--;
// }
// int main(){
//       int a = 5;
//       a++;
//       cout << a;
//       print(a);
//       cout << a << endl;
// }

// Pass by reference

void print(int &a){
      cout << a << endl;
      a++;
      a = a*2;
      a = a*2;
      a++;
      return;
}

int main(){
      int a = 5;
      a++;
      cout << a << endl;
      print(a);
      cout << a;
} 