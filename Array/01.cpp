#include <iostream>
using namespace std;

// Function to print Array

void printArray(int arr[], int size){
      for(int i = 0; i<size; i++){
            cout << arr[i] << ", ";
      }
}

// Function to print twice of the array

void printTwiceArray(int arr[], int size){
      for(int i = 0; i<size; i++){
            cout << 2*arr[i] << ", ";
      }
}

// Function to print Even Odd of the array

void printEvenOdd(int arr[], int size){
      for(int i = 0; i<size; i++){
            int number = arr[i];
            if(number % 2 == 0){
                  cout << "Even" << " ";
            }
            else{
                  cout << "Odd" << " ";
            }
      }
}

// Function to count 0 anad 1

void countZeroOnce(int arr[], int size){
      int totalZero = 0;
      int totalOne = 0;
      for(int i = 0; i<size; i++){
            int number = arr[i];

            if(number == 0){
                  totalZero++;
            }
            else if(number == 1){
                  totalOne++;
            }
      }
      cout << "Total Zero: " << totalZero << endl;
      cout << "Total One: " << totalOne << endl;
}

int main(){
      int arr[10] = {1,0,1,0,1};
      int size = 5;
      // printArray(arr, size);
      // printTwiceArray(arr, size);
      // printEvenOdd(arr, size);
      countZeroOnce(arr, size);
}