/*Debug the code. It is trying to print the given pattern.
Pattern
N = 4
   *
  ***
 *****
*******
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin>>n;
    
    int i=1;
    while(i<=n){
      // Space
        int j = 1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
      //  Stars
        int k = 1;
        while(k<=(2*i-1)){
            cout<<"*";
            k++;
        }
        cout << endl;
        i++;
    }
}