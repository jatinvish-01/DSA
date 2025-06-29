#include<iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int row=1;

    while(row<n){
        int j = row;
        int count = 1;
        while(count<=row){
            cout<<j;
            j++;
            count++;
        }
        cout << endl;
        row++;
    }
    return 0;
}