#include <iostream>
#include <vector>
using namespace std;

int main(){

      std::vector<int> arr{10,20,30,40};
      
      // Traversing using Iterator
      // Create iterator

      std::vector<int>::iterator it = arr.begin();

      while(it != arr.end()){
            cout << *it << "  ";
            it++;
      }cout << endl;
 
      return 0;
}