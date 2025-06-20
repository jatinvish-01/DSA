#include <iostream>
using namespace std;

int main (){
    int num;
    bool isPrime = true;

    cout << "Enter the number: ";
    cin >> num;

    if (num <= 1){
        isPrime = false; 
    }
    else{
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime){
        cout << num << " :is a Prime number." << endl;
    } 
    else{
        cout << num << " :is a Non-Prime number." << endl;
    }

    return 0;
}