#include <iostream>
using namespace std;

// int main (){
//     int num;
//     bool isPrime = true;

//     cout << "Enter the number: ";
//     cin >> num;

//     if (num <= 1){
//         isPrime = false; 
//     }
//     else{
//         for (int i = 2; i * i <= num; ++i) {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if (isPrime){
//         cout << num << " :is a Prime number." << endl;
//     } 
//     else{
//         cout << num << " :is a Non-Prime number." << endl;
//     }

//     return 0;
// }

// 2nd method

int main(){
    int n,  i = 2;
    cout << "Enter the number: ";
    cin >> n;

    while(i<n){
        if(n%i==0){
            cout << "No Prime" << i << endl;
        }
        else{
            cout << "Prime number" << i << endl;
        }
        i = i + 1;
    }
}