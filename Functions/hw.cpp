// 1. Write a function to print counting form 1 to 100
#include <iostream>
using namespace std;

void printCounting(int n){
      for(int i = 1; i<=n; i++){
            cout << i << endl;
      }
}

// int main(){
//       int n;
//       cout << "Enter the number: ";
//       cin >> n;
//       printCounting(n);
// }

// 2. Write a function to find simple interest

int simpleInterest(int p, int r, int t){
      int result = p * r * t / 100;
      return result;
}

// int main(){
//       int answer = simpleInterest(56, 89, 34);
//       cout << answer << endl;
// }

// 3. Write a function to print prime numbebr from 1 to 100

#include <iostream>
using namespace std;

bool isPrime(int n) {
      if (n <= 1) return false;
      for (int i = 2; i < n; i++) {
            if (n % i == 0) return false;
      }
      return true;
}

void printPrimes() {
      for (int i = 1; i <= 100; i++) {
            if (isPrime(i)) {
                  cout << i << endl;
            }
      }
}

int main(){
      printPrimes();
      return 0;
}
