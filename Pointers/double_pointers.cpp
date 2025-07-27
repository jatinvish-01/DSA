#include <iostream>
#include <vector>
using namespace std;

int main(){

      int a = 50;
      int *p = &a;
      int **q = &p;
      int **r = q;
      int ***s = &q;
      
      cout << r << endl;
      cout << s << endl;
 
      return 0;
}